#include <Adafruit_NeoPixel.h>

#define LED_PIN 5
#define NUMPIXELS 24

Adafruit_NeoPixel pixels(NUMPIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

void initLEDs() {

    pixels.begin();
}

void reactorPulseEffect() {

    for (int i = 0; i < NUMPIXELS; i++) {

        pixels.setPixelColor(i, pixels.Color(0, 180, 255));

        pixels.show();

        delay(10);
    }
}