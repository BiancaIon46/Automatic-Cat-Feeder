#include "Led.h"

Led::Led()
{
  this->pin = -1;
  this->startMillis = -1;
  this->open = 0;
}

Led::Led(int pin, int startMillis)
{
  pinMode(pin, OUTPUT);
  this->pin = pin;
  this->startMillis = startMillis;
  this->open = 0;
}

void Led::setPin(int pin)
{
  pinMode(pin, OUTPUT);
  this->pin = pin;
}

void Led::turnOn()
{
  for(int i=0; i<=255; i++)
  {
    analogWrite(this->pin, i);
    delay(10);
  }
  this->open = 1;
}

void Led::turnOff()
{
  for(int i=255; i>=0; i--)
  {
    analogWrite(this->pin, i);
    delay(10);
  }
  this->open = 0;
}

unsigned long int Led::getStartMillis()
{
  return this->startMillis;
}

int Led::getOpen()
{
  return this->open;
}

void Led::setStartMillis(unsigned long int millisec)
{
  this->startMillis = millisec;
}
