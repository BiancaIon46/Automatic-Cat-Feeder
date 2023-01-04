#include "MovementSensor.hpp"

MovementSensor::MovementSensor()
{
  this->echoPin = 5;
  this->trigPin = 6;
  this->duration = 0;
  this->distance = 0;
}

void MovementSensor::setDuration(int duration)
{
  this->duration = duration;
}
void MovementSensor::setDistance(int distance)
{
  this->duration = distance;
}

int MovementSensor::getDuration()
{
  return this->duration;
}

int MovementSensor::getDistance()
{
  return this->distance;
}

int MovementSensor::getEchoPin()
{
  return this->echoPin;
}

int MovementSensor::gettrigPin()
{
  return this->trigPin;
}
