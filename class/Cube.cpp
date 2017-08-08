#include "../import.h"
#include "Vecteur.h"
#include "Physique.h"
#include "Cube.h"
Cube::Cube(){
    
}
Cube::Cube(int x, int y) : physique(){
    this->x = x;
    this->y = y;
    form.setSize(sf::Vector2f(32, 32));
    form.setFillColor(sf::Color::Red);
    form.setPosition(x, y);
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
Vecteur Cube::update(){
    Vecteur position(0, 0);
    position = physique.update();
    return position;
}
int Cube::X(){
    return x;
}
int Cube::Y(){
    return y;
}
void Cube::addForce(Vecteur * v){
    physique.add(v);
}
void Cube::removeForce(Vecteur * v){
    physique.remove(v);
}
void Cube::setVitesseX(float value){
    physique.setVitesseX(value);
}
void Cube::setVitesseY(float value){
    physique.setVitesseY(value);
}
Vecteur Cube::move(float deplacementX, float deplacementY){
    x += deplacementX;
    y += deplacementY;
    form.setPosition(x, y);
}
void Cube::Left(int value){
    x -= value;
}
void Cube::Right(int value){
    x += value;
}
