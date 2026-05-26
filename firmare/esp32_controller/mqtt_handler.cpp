#include <WiFi.h>
#include <PubSubClient.h>
#include "secrets.h"
#include "config.h"

WiFiClient espClient;
PubSubClient client(espClient);

void callback(char* topic, byte* payload, unsigned int length) {

    String message = "";

    for (int i = 0; i < length; i++) {

        message += (char)payload[i];
    }

    if (message == "LIGHT_ON") {

        digitalWrite(RELAY1, LOW);
    }

    if (message == "LIGHT_OFF") {

        digitalWrite(RELAY1, HIGH);
    }

    if (message == "FAN_ON") {

        digitalWrite(RELAY2, LOW);
    }

    if (message == "FAN_OFF") {

        digitalWrite(RELAY2, HIGH);
    }
}

void setupMQTT() {

    client.setServer(MQTT_SERVER, 1883);

    client.setCallback(callback);
}

void reconnectMQTT() {

    while (!client.connected()) {

        if (client.connect("ARC_REACTOR")) {

            client.subscribe("arc/reactor/control");
        }
    }
}