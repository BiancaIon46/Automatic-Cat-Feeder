#pragma once


class MovementSensor
{
  int echoPin;
  int trigPin;
  
  int duration;
  float distance;

public:
  MovementSensor();
  MovementSensor(int , int );
  void setDuration(int );
  void setDistance(float );
  int getDuration();
  float getDistance();
  int getEchoPin();
  int getTrigPin();
};
