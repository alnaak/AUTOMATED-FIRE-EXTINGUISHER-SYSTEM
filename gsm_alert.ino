#include <SoftwareSerial.h> 
SoftwareSerial gsm(2, 3);   
char number[] = "+911234567890";   // Replace with your phone number

void setup() 
{ 
    Serial.begin(9600); 
    gsm.begin(9600); 
    delay(2000); 
    Serial.println("GSM Module Initialized"); 
} 

void loop() 
{ 
    int sensorValue = analogRead(A0);   

    if (sensorValue < 100 || sensorValue < 80) 
    { 
        gsm.println("AT+CMGF=1");           
        delay(1000); 
        gsm.print("AT+CMGS=\""); 
        gsm.print(number); 
        gsm.println("\""); 
        delay(1000); 
        gsm.println("FIRE DETECTED!");      
        gsm.write(26);                      
        delay(5000); 
        Serial.println("\nSMS SENT: FIRE DETECTED!\n");
    }
}
