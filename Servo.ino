#include "Servo.h"
const int SERVO = 3;
const int PIR_SENSOR = 6;
Servo myservo;
void setup() {
        pinMode(PIR_SENSOR, INPUT);
        myservo.attach(SERVO);
        Serial.begin(9600);
}
void loop() {
        myservo.write(90);
        delay(2000);
        myservo.write(0);
        delay(2000);
        

}
