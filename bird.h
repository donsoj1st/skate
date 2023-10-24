#ifndef ROCK_H
#define ROCK_H

#include "flyingObject.h"

class Rock : public FlyingObject
{
 private:


 public:
  Rock()FlyingObject(Point(0, 0), Velocity(0, 0), true)
    {

      alive = true;
      setPoint(point);
    }
  virtual void draw() = 0;
  virtual int hit() = 0;
  virtual  void advance();
};


class NormalBird : public Rock
{
 public:
  NormalBird(const Point & point);
  virtual int hit();
  virtual void draw();
};
class StandardBird: public Rock
{

 public:
  StandardBird();
  virtual int hit();
  virtual void draw();
  int n;

};
class ToughBird : public Bird
{
 public:
  ToughBird(const Point & point);
  virtual int hit();
  virtual void draw();
};
#endif
