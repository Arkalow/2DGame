#include <math.h>
using namespace std;
#include "../import.h"
#include "Force.h"
Force::Force(){

}
Force::~Force(){

}
Force::Force(int x0, int y0, int t, float forceX, float forceY){
    this->x0 = x0;
    this->y0 = y0;
    this->t = t;

    x = 0;
    y = 0;

    this->forceX = forceX;
    this->forceY = forceY;

    absoluteX = x;
    absoluteY = y;
}
Force::Force(int x0, int y0, int t, int vitesse, int amplitude){
    this->x0 = x0;
    this->y0 = y0;
    this->t = t;
    x = 0;
    y = 0;

    angle = (-amplitude*M_PI)/180;//conversion en rad
    update();
    absoluteX = x;
    absoluteY = y;
}
// void Force::zero(){
//     vitesse = 0;
//     this->x0 = 0;
//     this->y0 = 0;
//     this->t = 0;

//     x = 0;
//     y = 0;

//     this->forceX = 0;
//     this->forceY = 0;

//     absoluteX = x;
//     absoluteY = y;
// }
void Force::update(){
    t++;
    x = 0.5 * forceX * t * t + vitesse * cos(angle) * t; 
    y = 0.5 * forceY * t * t + vitesse * sin(angle) * t; 
}
int Force::X(){
    return x - absoluteX;
}
int Force::Y(){
    return y - absoluteY;
}
int Force::X0(){
    return x0;
}
int Force::Y0(){
    return y0;
}
int Force::T(){
    return t;
}
float Force::ForceX(){
    return forceX;
}
float Force::ForceY(){
    return forceY;
}