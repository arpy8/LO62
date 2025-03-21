bool isEngineOn = false;

struct FingerData {
  int middle;
  bool engineState;
} fingerData;


void blinkLED(int times, int delayMs) {
  for (int i = 0; i < times; i++) {
    digitalWrite(LED_BT, HIGH);
    delay(delayMs);
    digitalWrite(LED_BT, LOW);
    delay(delayMs);
  }
}

void decelerate(int delayTime) {
  for (int speed = fingerData.middle; speed >= 0; speed--) {
    sendCommand((uint8_t)speed);
    delay(delayTime);
  }
}

void accelerate(int delayTime) {
  for (int speed = fingerData.middle; speed <= 100; speed++) {
    sendCommand((uint8_t)speed);
    delay(delayTime);
  }
}


void toggleEngine() {
  isEngineOn = !isEngineOn;
  fingerData.engineState = isEngineOn;
  Serial.print("Engine State Changed - Now: ");
  Serial.println(isEngineOn ? "ON" : "OFF");
  blinkLED(2, 200);
  decelerate(100);
}

String intToHex(int number) {
  String hexString = String(number, 16);

  if (hexString.length() < 2) {
    hexString = "0" + hexString;
  }

  hexString.toUpperCase();

  return "0x" + hexString;
}