#pragma once
#include<iostream>

class MovementSensor
{
  int echoPin;
  int trigPin;
  
  int duration;
  int distance;

public:
  MovementSensor();
  void setDuration(int );
  void setDistance(int );
  int getDuration();
  int getDistance();
  int getEchoPin();
  int getTrigPin();
}
