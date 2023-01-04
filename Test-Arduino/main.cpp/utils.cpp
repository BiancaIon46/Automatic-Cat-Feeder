#include "utils.h"

void openServo(Servo usa, int noDegrees)
{
  if(noDegrees > usa.read())
  {
    for(int i=usa.read(); i<=noDegrees; i++)
    {
      usa.write(i);
      delay(10);
    }
  }
  else
  {
    for(int i=usa.read(); i>=noDegrees; i--)
     {
      usa.write(i);
      delay(10);
     }
  }
  
}
