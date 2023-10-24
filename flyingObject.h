#ifndef FLYING_OBJECT_H
#define FLYING_OBJECT_H

#include "point.h"
#include "velocity.h"
class FlyingObject
{
 protected:
  Point point;
  Velocity velocity;
  bool alive;

 public:
  FlyingObject(){ alive = true;}
  virtual ~FlyingObject() { alive = false;}
  Point getPoint()const {return point;}
  Velocity getVelocity() const {return velocity;}
  bool isAlive() {return alive;}
  void setAlive(bool alive){this->alive = alive;}
  void setPoint(const Point &point){this->point = point;}
  void setVelocity(const Velocity &velocity){this->velocity=velocity;}
  void advance();
  virtual void draw()=0;
};












#endif
