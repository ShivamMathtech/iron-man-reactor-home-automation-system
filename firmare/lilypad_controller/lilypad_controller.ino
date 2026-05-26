#include "gesture_control.h"
#include "led_effects.h"
#include "touch_sensor.h"
#include "haptic_feedback.h"
#include "reactor_modes.h"

void setup() {

    Serial.begin(9600);

    initGesture();

    initLEDs();

    initTouch();

    initHaptic();
}

void loop() {

    detectGesture();

    checkTouch();

    updateReactorMode();

    reactorPulseEffect();

    delay(20);
}