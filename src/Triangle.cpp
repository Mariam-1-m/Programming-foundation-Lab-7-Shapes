#include "../include/Triangle.h"
#include <iostream>
using namespace std;
#include "raylib.h"


 Triangle::Triangle(){
    std::cout<<"Triangle"<<std::endl;    
 }
void Triangle::draw(){
DrawTriangle({675.0f,235.0f},{595.0f,365.0f},{755.0f,365.0f},YELLOW);
       
}