#include <LiquidCrystal.h>
#include <Servo.h>
Servo servo1;
int joyX = 0;
int joyY = 1;

const int buzzer = 9;

  
int servoVal;
  
void setup() 
{
  pinMode(10,OUTPUT);
   pinMode(8,OUTPUT);
   pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
   pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
   pinMode(7,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(12,OUTPUT);
   pinMode(2,OUTPUT);
    pinMode(buzzer, OUTPUT);
   Serial.begin(9600);
  servo1.attach(3);
  
}
  
void loop()
{
  int x,y;
  x=analogRead(joyX);
  y=analogRead(joyY);

  Serial.print(x,DEC);
   Serial.print(",");
   Serial.print(y,DEC);
     Serial.print("\n");
 
    servoVal = analogRead(joyX);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo1.write(servoVal);
  
    servoVal = analogRead(joyY);
  servoVal = map(servoVal, 0, 1023,0, 180);
  servo1.write(servoVal);
  delay(15); 
   
    if(x>=480)
    {
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          digitalWrite(8,HIGH);
          digitalWrite(10,HIGH);
          digitalWrite(11,HIGH);
          digitalWrite(12,HIGH);
       noTone(buzzer);     // Stop sound...

       
      }
   
   else
   {
      
         tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(100);   // ...for 1 sec

 
        digitalWrite(8,HIGH);
         delay(50); 
         digitalWrite(8,LOW);
           delay(50); 
       digitalWrite(10,HIGH);
         delay(50); 
            digitalWrite(10,LOW);
              delay(50); 
       digitalWrite(3,HIGH);
        delay(50);
         digitalWrite(3,LOW); 
         delay(50);
       digitalWrite(4,HIGH);
        delay(50);
               digitalWrite(4,LOW);
               delay(50);
       digitalWrite(5,HIGH);
          delay(50);
            digitalWrite(5,LOW);
            delay(50);
              digitalWrite(6,HIGH);
               delay(50);
                digitalWrite(6,LOW);
                  delay(50);
       digitalWrite(7,HIGH);
        delay(50);
         digitalWrite(7,LOW);
          delay(50);
       digitalWrite(11,HIGH);
       delay(50);
             digitalWrite(11,LOW);
              delay(100);
       digitalWrite(12,HIGH);
        delay(50);
              digitalWrite(12,LOW);
               delay(50);
               
        digitalWrite(2,HIGH);
         delay(50); 
         digitalWrite(2,LOW);
    }
    
    
    

   
  
}
