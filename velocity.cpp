#include <iostream>
#include "velocity.h"
using namespace std;
Velocity::Velocity()
{
   x = 0.0;
   y = 0.0;
}


Velocity::Velocity(float x, float y)
{
   this -> x = x;
   this -> y = y;
}
float Velocity::getDx()const
{
   return x;
}
float Velocity::getDy()const
{
   return y;
}
void Velocity::setDx(float x)
{
   this -> x = x; 
}
void Velocity::setDy(float y)
{
   this -> y = y;
}
