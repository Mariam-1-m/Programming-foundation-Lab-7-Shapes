#ifndef ELLIPSE_H
#define ELLIPSE_H
#include "Shape.h"

class Ellipse:public Shape
{
  double side;
 
   public:
    Ellipse();
  void draw()override;

};
#endif