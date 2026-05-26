#define MOTOR_PIN 6

void initHaptic() {

    pinMode(MOTOR_PIN, OUTPUT);
}

void vibrate() {

    digitalWrite(MOTOR_PIN, HIGH);

    delay(100);

    digitalWrite(MOTOR_PIN, LOW);
}