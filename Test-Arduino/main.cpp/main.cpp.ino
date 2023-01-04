#include "MovementSensor.h"
#include "Servo.h"
#include "Led.h"
#include "Button.h"
#include "utils.h"
//#include "ServoMotor.h"

Servo S, usa;
MovementSensor MS;
Led green, red;
Button b(3, 0);

void setup() {
  // put your setup code here, to run once:
  pinMode(MS.getTrigPin(), OUTPUT);
  pinMode(MS.getEchoPin(), INPUT);
  Serial.begin(9600);

  S.attach(9);
  S.write(90);

  usa.attach(8);
  usa.write(0);

  red.setPin(10);
  green.setPin(11);

  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
   b.setState(digitalRead(b.getPin()));
 
   if(b.getState() == LOW)
   {
      if(usa.read() == 0)
       {
          openServo(usa, 180);
       }
       else{
          openServo(usa, 0);
       }
   }

  if(green.getOpen() == 0 && red.getOpen() == 0)
  {
      digitalWrite(MS.getTrigPin(), LOW);
      delayMicroseconds(2);
    
      digitalWrite(MS.getTrigPin(), HIGH);
      delayMicroseconds(10);
      digitalWrite(MS.getTrigPin(), LOW);
  
      MS.setDuration(pulseIn(MS.getEchoPin(), HIGH));
    
      MS.setDistance(MS.getDuration() * 0.034 / 2); // vine de la viteza luminii
      
      if(MS.getDistance() <= 10 && MS.getDistance() >= 2)
      {
        green.turnOn();
        green.setStartMillis(millis());
        S.write(0);
        
      }
    }
      if((green.getOpen() == 1) && (millis() - green.getStartMillis() > 10000))
      {
        green.turnOff();
        if(red.getOpen() == 0)
        {
          S.write(90);
          red.turnOn();
          red.setStartMillis(millis());
        }
      }
      else if(green.getOpen() == 1)
          {
            green.turnOff();
            green.turnOn();
          }

     if((red.getOpen() == 1) && millis() - red.getStartMillis() > 10000)
    {
      Serial.print(millis());
      Serial.print('/');
      Serial.println(red.getStartMillis());
      red.turnOff();
    }
}
