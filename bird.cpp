#include "bird.h"
#include "uiDraw.h"
#include "game.h"
void Bird::advance()
{
   point.addY(velocity.getDy());
   point.addX(velocity.getDx());
}

NormalBird::NormalBird(const Point & point) : Bird(point)
{
 
  float dx = random(3,6);
  float dy = random(0,4);
  if(point.getY() > 0)
    {
      dy *= -1;
    }
  Velocity newvel;
  newvel.setDx(dx);
  newvel.setDy(dy);
  setVelocity(newvel);
}

void NormalBird::draw()
{
  if(alive)
    {
      drawCircle(point,6);
    }
}
int NormalBird::hit()
{
  kill();
  return 1;
}
StandardBird::StandardBird(const Point & point): Bird(point)
{
  float dx = random(2,4);
  float dy = random(0,2);
  if(point.getY() > 0)
    {
      dy *= -1;
    }
  Velocity newvel;
  newvel.setDx(dx);
  newvel.setDy(dy);
  setVelocity(newvel);
  n =0;
}
int StandardBird::hit()
{

  
  if (n<3)
    {
      n++;
      return 1;
      
    }
  if (n>2)
    {
      kill();
      n = 0;
      return 2;
    }
}
void StandardBird::draw()
{
  if(alive)
    {
      drawToughBird(point,6,3);
    }
}
ToughBird::ToughBird(const Point & point): Bird(point)
{
  float dx = random(3,6);
  float dy = random(0,4);
  if(point.getY() > 0)
    {
      dy *= -1;
    }
  Velocity newvel;
  newvel.setDx(dx);
  newvel.setDy(dy);
  setVelocity(newvel);
}
int ToughBird::hit()
{
  kill();
  return -10;
}
void ToughBird::draw()
{
  if(alive)
    {
      drawSacredBird(point,4);
    }
}
