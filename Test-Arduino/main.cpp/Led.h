#pragma once
#include<Arduino.h>

class Led
{
  int pin;
  unsigned long int startMillis;
  int open;

public:
  Led();
  Led(int , int);

  void turnOn();
  void turnOff();
  unsigned long int getStartMillis();
  void setStartMillis(unsigned long int );
  int getOpen();

  void setPin(int );
};
