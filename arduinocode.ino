#include <Servo.h> 
#define BUZZER_PIN 3 

Servo s1; 
Servo s2; 

void setup() 
{ 
    pinMode(BUZZER_PIN, OUTPUT); 
    s1.attach(6); 
    s2.attach(7); 
    Serial.begin(9600); 
} 

void loop() 
{ 
    int sensorValue1 = analogRead(A0); 
    int sensorValue2 = analogRead(A1); 

    if (sensorValue1 < 100 || sensorValue2 < 80) 
    { 
        tone(BUZZER_PIN, 2000, 3000); 
        delay(5000); 

        s1.write(0); 
        s2.write(0); 
        delay(10); 

        delay(2000); 

        s1.write(90); 
        s2.write(90); 
        delay(10); 

        delay(2000); 

        s1.write(0); 
        s2.write(0); 
        delay(10); 
    } 
    else 
    { 
        analogWrite(BUZZER_PIN, 0); // Turn off buzzer 
    } 

    delay(2000); 
}
