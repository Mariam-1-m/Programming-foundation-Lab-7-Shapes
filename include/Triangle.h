#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle:public Shape
{
  double height ,base;

    public:
      Triangle();
  void draw()override;
  

};
#endif