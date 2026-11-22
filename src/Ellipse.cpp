#include<iostream>
#include "../include/Ellipse.h"
#include "raylib.h"


  Ellipse::Ellipse(){
     std::cout<<"Ellipse"<<std::endl;    
 }
  void Ellipse::draw(){
    DrawEllipse(295,300,85,50,GREEN);
  }
  #