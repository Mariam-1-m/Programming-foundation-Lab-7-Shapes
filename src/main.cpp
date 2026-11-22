#include <iostream>
using namespace std;
#include "raylib.h"
#include "../include/Circle.h"
#include "../include/Ellipse.h"
#include "../include/RectangleShape.h"
#include "../include/Triangle.h"



int main(){

    cout<<"==========================Hello in Shapes world====================="<<endl;
    InitWindow(800, 600, "Lab 7 - Drawing Shapes");
    SetTargetFPS(60);

    Shape * picture[4]={new Circle(),new Ellipse(),new Triangle(),new RectangleShape()};

    while(!WindowShouldClose()){
        ClearBackground(RAYWHITE);
        BeginDrawing();
        for(int i =0;i<4;i++){
            picture[i]->draw();
        }
     
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
