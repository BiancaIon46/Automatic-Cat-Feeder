#include "ServoMotor.h"

ServoMotor::ServoMotor()
{
  this->angle = 90;
  this->pin = 9;
}

ServoMotor::ServoMotor(int angle, int pin)
{
  this->angle = angle;
  this->pin = pin;
}

void ServoMotor::setAngle(int angle)
{
  this->angle = angle;
}

int ServoMotor::getAngle()
{
  return this->angle;
}
