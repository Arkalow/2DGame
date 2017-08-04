#include <math.h>
using namespace std;

#include "Force.h"
Force::Force(){

}
Force::~Force(){

}
Force::Force(int x0, int y0, float t, int forceX, int forceY){
    this->x0 = x0;
    this->x0 = x0;
    this->t = t;

    x = x0;
    y = y0;

    this->force = force;
}
Force::Force(int x0, int y0, float t, int vitesse, int amplitude){
    this->x0 = x0;
    this->x0 = x0;
    this->t = t;

    x = 0;
    y = 0;

    angle = (-amplitude*M_PI)/180;
}
void Force::update(){
    t++;
    x = 0.5 * forceX * t * t + vitesse * cos(angle) * t; 
    y = 0.5 * forceY * t * t + vitesse * sin(angle) * t; 
}
int Force::X(){
    return x + x0;
}
int Force::Y(){
    return y + y0;
}