#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author Raushan Kumar
 * @date 2026-02-22
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
*/
#define TRIG_PIN 9
#define ECHO_PIN 10

long duration;
float distance;



void setup() {
    Serial.begin(9600);

    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    Serial.println("Ultrasonic Distance Measurement System Initialized");


}

void loop() {


}
