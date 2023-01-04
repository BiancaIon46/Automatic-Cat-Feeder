#pragma once
#include "Servo.h"

class ServoMotor
{
  int angle;
  int pin;

public:
  ServoMotor();
  ServoMotor(int, int );
  void setAngle(int );
  int getAngle();
};
