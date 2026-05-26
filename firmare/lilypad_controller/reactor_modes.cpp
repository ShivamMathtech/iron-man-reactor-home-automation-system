#include <Arduino.h>

void updateReactorMode() {

    int sensor = analogRead(A0);

    if (sensor > 500) {

        Serial.println("POWER_MODE");
    }
    else {

        Serial.println("IDLE_MODE");
    }
}