
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle:public Shape
{
    double radius;
  
    public:
    Circle();
    void draw()override;


};
#endif