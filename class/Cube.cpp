#include "../import.h"
#include "Cube.h"
Cube::Cube(){
    
}
Cube::Cube(int x, int y){
    this->x = x;
    this->y = y;
    form.setSize(sf::Vector2f(32, 32));
    form.setFillColor(sf::Color::Red);
    form.setPosition(x, y);
    amplitude = 90;
    angle = (-amplitude*M_PI)/180;
    vitesse = 0;
    t = 0;
    t0 = 100;
    x0 = x;
    y0 = y;
    f = g + 0.01;
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
    vitesse = 1;
    amplitude = 90;
    angle = (-amplitude*M_PI)/180;
    f = 9.99999;
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
int Cube::X(){
    return x;
}
int Cube::Y(){
    return y;
}
void Cube::Down(){
    vitesse = 0;
    f = g;
    t0 = t;
    y0 = y;
}
void Cube::fall(){
    amplitude = 90;
    angle = (-amplitude*M_PI)/180;
    vitesse = 0;
    t0 = t + 100;
    x0 = x;
    y0 = y;
    f = g + 0.01;
}