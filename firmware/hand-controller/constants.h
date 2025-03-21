#include "secrets.h"

#define LED_BT 2
#define sensorPinThumb 33
#define sensorPinMiddle 39
#define calibrationTime 5000

#define LED_BUILTIN 15
#define SERVICE_UUID "4fafc201-1fb5-459e-8fcc-c5c9c331914b"
#define CHAR_UUID "beb5483e-36e1-4688-b7f5-ea07361b26a8"

int previousSpeed = -1;
const int threshold = 60;
const int thresholdThumb = 200;
unsigned long lastThumbToggleTime = 0;
const unsigned long debounceDelay = 1000;
unsigned long thumbBelowThresholdStartTime = 0;