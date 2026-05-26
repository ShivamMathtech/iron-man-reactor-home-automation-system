#include "config.h"
#include "wifi_manager.h"
#include "mqtt_handler.h"
#include "relay_control.h"
#include "oled_display.h"

void setup() {

    Serial.begin(115200);

    initRelays();

    initOLED();

    connectWiFi();

    setupMQTT();

    displayBootScreen();
}

void loop() {

    if (!client.connected()) {
        reconnectMQTT();
    }

    client.loop();

    updateOLEDStatus();

    delay(20);
}