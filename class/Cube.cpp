#include "../import.h"
#include "Cube.h"
float g = 9.81;
Cube::Cube(){
    
}
Cube::Cube(int x, int y){
    this->x = x;
    this->y = y;
    form.setSize(sf::Vector2f(32, 32));
    form.setOutlineColor(sf::Color::Red);
    form.setPosition(x, y);
    amplitude = 80;
    angle = (-amplitude*M_PI)/180;
    vitesse = 0;
    t = 0;
    x0 = x;
    y0 = y;
    f = g;
}
Cube::~Cube(){

}
ostream& operator<<(ostream &os, Cube &c)
{ 
    os << "x: " << c.x << "| y: " << c.y << "\n";
    return os;
}
sf::RectangleShape Cube::Form(){
    return form;
}
void Cube::update(){

    t++;
    y = -0.5*(g-f)*(t - t0)*(t - t0 - 100) + vitesse * sin(angle) + y0;   
    
    form.setPosition(x, y);
}
void Cube::Up(){//Donne une impulion vers le haut
    vitesse = 3;
    amplitude = 90;
    angle = (-amplitude*M_PI)/180;
    f = 10;
    t0 = t;
    y0 = y;
}
void Cube::Left(){
    vitesse = 1;
    amplitude = 180;
    angle = (-amplitude*M_PI)/180;
    x0 = x;
    x -= vitesse;
}
void Cube::Right(){
    vitesse = 1;
    amplitude = 0;
    angle = (-amplitude*M_PI)/180;
    x0 = x;
    x += vitesse;
}