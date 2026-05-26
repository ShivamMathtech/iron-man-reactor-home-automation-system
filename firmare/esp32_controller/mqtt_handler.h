#ifndef MQTT_HANDLER_H
#define MQTT_HANDLER_H

#include <PubSubClient.h>

extern PubSubClient client;

void setupMQTT();
void reconnectMQTT();

#endif