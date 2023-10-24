#include "flyingObject.h"

void FlyingObject::advance()
{
  point.addY(velocity.getDy());
  point.addX(velocity.getDx());
}
