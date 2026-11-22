#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
 void Intialize();
 void closeWindow();
 virtual void draw()=0;
~Shape();
};

#endif