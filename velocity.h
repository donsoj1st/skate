#ifndef velocity_h
#define velocity_h

class Velocity
{
  private:
   float x;
   float y;
  public:
   Velocity();
   Velocity(float y, float x);
   float getDx()const;
   float getDy()const;
   void setDx(float x);
   void setDy(float y);

};
#endif
