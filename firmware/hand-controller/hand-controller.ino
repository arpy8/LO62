#include "constants.h"
#include "bluetooth.h"
#include "utils.h"
#include "sensors.h"


void setup() {
  Serial.begin(115200);
  Serial.println("Starting...");

  setupSensor();
  setupBluetooth();
}

void loop() {
  if (!connected && doConnect) {
    if (connectToServer()) {
      Serial.println("Connected to board");
    } else {
      Serial.println("Failed to connect to the board");
      delay(5000);
    }
  }

  float thumbValue = analogRead(sensorPinThumb);
  float rawMiddle = analogRead(sensorPinMiddle);

  int normalizedMiddle = normalizeValue(rawMiddle, middleCal);
  // normalizedMiddle = map(abs(100 - normalizedMiddle), 1, 100, 20, 50);
  unsigned long currentMillis = millis();

  if (thumbValue < thresholdThumb) {
    if (thumbBelowThresholdStartTime == 0) {
      thumbBelowThresholdStartTime = currentMillis;
    } else if (currentMillis - thumbBelowThresholdStartTime > 2000) {
      if (currentMillis - lastThumbToggleTime > debounceDelay) {
        toggleEngine();
        lastThumbToggleTime = currentMillis;
      }
      thumbBelowThresholdStartTime = 0;
    }
  } else {
    thumbBelowThresholdStartTime = 0;
  }

  if (isEngineOn && normalizedMiddle % 2 == 0) {
    (normalizedMiddle > threshold) ? accelerate(100) : decelerate(100);

    Serial.print("Sent Speed: ");
    Serial.println(normalizedMiddle);

    int brightness = map(normalizedMiddle, 1, 100, 0, 255);
    analogWrite(LED_BUILTIN, brightness);
  } else {
    Serial.print(isEngineOn);
    Serial.print("\t");
    Serial.print(normalizedMiddle);
    Serial.print("\t");
    Serial.println(thumbValue);

    if (!isEngineOn || (normalizedMiddle <= threshold)) {
      previousSpeed = -1;
    }
  }

  delay(100);
}