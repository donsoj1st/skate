#include <cmath>
#include "uiDraw.h"

#include "bullet.h"

void Bullet::advance()
{
   point.addY(velocity.getDy());
   point.addX(velocity.getDx());
}
void Bullet::draw()
{
  if(alive)
    {
      drawDot(point);
    }
  
}
void Bullet::fire(const Point & point, float angle)
{
  this->point = point;
  velocity.setDx(-cos(M_PI/180.0 *angle)* 10);
  velocity.setDy(sin(M_PI/180.0 *angle)* 10);
  alive = true;
}
