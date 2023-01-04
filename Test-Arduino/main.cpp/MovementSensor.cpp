#include "MovementSensor.h"

MovementSensor::MovementSensor()
{
  this->echoPin = 5;
  this->trigPin = 6;
  this->duration = 0;
  this->distance = 0;
}

MovementSensor::MovementSensor(int Epin, int Tpin)
{
  this->echoPin = Epin;
  this->trigPin = Tpin;
  this->duration = 0;
  this->distance = 0;
}

void MovementSensor::setDuration(int duration)
{
  this->duration = duration;
}
void MovementSensor::setDistance(float distance)
{
  this->distance = distance;
}

int MovementSensor::getDuration()
{
  return this->duration;
}

float MovementSensor::getDistance()
{
  return this->distance;
}

int MovementSensor::getEchoPin()
{
  return this->echoPin;
}

int MovementSensor::getTrigPin()
{
  return this->trigPin;
}
