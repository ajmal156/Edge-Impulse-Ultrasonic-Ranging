// UPDATE THIS: Use your exact Edge Impulse header name
#include <Ultrasonic_Sensor_For_DISTANCE_MEASURE_inferencing.h>

#define TRIG_PIN 17
#define ECHO_PIN 16

// Buffer size required by your trained impulse
#define N_SAMPLES EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE

static float features[N_SAMPLES];
static size_t feature_index = 0;
static unsigned long last_sampling_millis = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial) delay(10);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  digitalWrite(TRIG_PIN, LOW);

  Serial.println("\n=== Heltec Edge Impulse Offline Inference ===");
}

void loop() {
  // Collect raw sensor samples at the rate expected by the model
  if (millis() - last_sampling_millis >= (1000 / EI_CLASSIFIER_FREQUENCY)) {
    last_sampling_millis = millis();

    // Trigger HC-SR04 pulse
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    long duration = pulseIn(ECHO_PIN, HIGH, 30000);
    float distance_cm = duration * 0.0343 / 2.0;

    if (distance_cm == 0 || distance_cm > 400.0) {
      distance_cm = 400.0;
    }

    // Fill the feature buffer
    features[feature_index++] = distance_cm;

    // When the buffer matches the window length, run local inference
    if (feature_index >= N_SAMPLES) {
      signal_t signal;
      int err = numpy::signal_from_buffer(features, N_SAMPLES, &signal);

      if (err != 0) {
        Serial.printf("Signal creation error: %d\n", err);
        feature_index = 0;
        return;
      }

      ei_impulse_result_t result = { 0 };
      EI_IMPULSE_ERROR res = run_classifier(&signal, &result, false);

      if (res != EI_IMPULSE_OK) {
        Serial.printf("Classifier error: %d\n", res);
        feature_index = 0;
        return;
      }

      // Output real-time classification scores
      Serial.println("\n--- Predictions ---");
      for (size_t ix = 0; ix < EI_CLASSIFIER_LABEL_COUNT; ix++) {
        Serial.printf("%s: %.2f%%\n", 
                      result.classification[ix].label, 
                      result.classification[ix].value * 100.0);
      }

      // Reset buffer index for next window cycle
      feature_index = 0;
    }
  }
}