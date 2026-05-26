#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void initOLED() {

    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

    display.clearDisplay();

    display.display();
}

void displayBootScreen() {

    display.setTextSize(2);

    display.setTextColor(WHITE);

    display.setCursor(10, 20);

    display.println("ARC CORE");

    display.display();
}

void updateOLEDStatus() {

    display.clearDisplay();

    display.setTextSize(1);

    display.setCursor(0,0);

    display.println("SYSTEM ONLINE");

    display.display();
}