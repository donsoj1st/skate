#ifndef BULLET_H
#define BULLET_H

#include "flyingObject.h"

class Bullet : public FlyingObject
{
 private:
 public:
  Bullet(){alive = true; };
  virtual void draw();
  virtual void fire(const Point &point, float angle);
  void advance();

};


#endif
