class MovementSensor
{
  int echoPin;
  int trigPin;
  
  int duration;
  int distance;

public:
  MovementSensor();
  setDuration();
  setDistance();
  getDuration();
  getDistance();
  getEchoPin();
  getTrigPin();
}
