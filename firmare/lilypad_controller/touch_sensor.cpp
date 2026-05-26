#define TOUCH_PIN 4

void initTouch() {

    pinMode(TOUCH_PIN, INPUT);
}

void checkTouch() {

    if (digitalRead(TOUCH_PIN)) {

        Serial.println("TOUCH_ACTIVE");
    }
}