

#include "../include/RectangleShape.h"
#include "raylib.h"
#include<iostream>

using namespace std;
RectangleShape::RectangleShape(){
    std::cout<<"Rectangle"<<std::endl;    
}

void RectangleShape::draw(){
DrawRectangle(425,245,120,110,RED);
}

