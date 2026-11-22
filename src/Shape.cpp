

# include "../include/Shape.h"
#include<iostream>
using namespace std;
#include "raylib.h"

 void Intialize(){
    InitWindow(800,700 ,"Hello in our picture");
 }

 void closeWindow(){
    closeWindow();
 }

 Shape::~Shape(){
   cout<<"Shape is destroyed!"<<endl;
 }

