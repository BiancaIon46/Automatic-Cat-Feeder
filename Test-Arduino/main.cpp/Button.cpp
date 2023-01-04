#include "Button.h"

Button::Button()
{
  this->pin = -1;
  this->state = 0;
}

Button::Button(int pin, int state)
{
  pinMode(pin, INPUT);
  this->pin = pin;
  this->state = state;
}

void Button::setPin(int pin)
{
  pinMode(pin, INPUT);
  this->pin = pin;
}

int Button::getState()
{
  return this->state;
}

void Button::setState(int state)
{
  this->state = state;
}

int Button::getPin()
{
  return this->pin;
}
