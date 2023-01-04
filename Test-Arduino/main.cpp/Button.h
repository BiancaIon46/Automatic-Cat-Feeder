#pragma once
#include<Arduino.h>

class Button
{
  int pin;
  int state;

public:
  Button();
  Button(int, int );
  void setPin(int );
  void setState(int );
  int getState();
  int getPin();
};
