#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void initGesture() {

    Wire.begin();

    mpu.initialize();
}

void detectGesture() {

    int16_t ax, ay, az;

    mpu.getAcceleration(&ax, &ay, &az);

    if (ax > 15000) {

        Serial.println("LIGHT_ON");
    }

    if (ax < -15000) {

        Serial.println("LIGHT_OFF");
    }
}