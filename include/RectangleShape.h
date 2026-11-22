
#ifndef RECTANGLESHAPE_H
#define RECTANGLESHAPE_H

#include "Shape.h"

class RectangleShape:public Shape
{
  double width, heigth;
  public:
  RectangleShape();
  void draw();
};
#endif