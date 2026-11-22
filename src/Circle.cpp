#include<iostream>
#include "../include/Circle.h"
#include "raylib.h"

 Circle::Circle(){
   std::cout<<"Circle"<<std::endl;    
 }

void Circle::draw(){
DrawCircle(110,300,65,MAGENTA);
}