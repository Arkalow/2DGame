#include "../import.h"
#include "Vecteur.h"
#include "Physique.h"
#include "Animation.h"
#include "Personnage.h"
Personnage::Personnage(int x, int y, string ln) : physique(), form(ln){
    this->x = x;
    this->y = y;
    form.setPosition(x, y);
}
Personnage::~Personnage(){

}
ostream& operator<<(ostream &os, Personnage &c)
{ 
    os << "x: " << c.x << "| y: " << c.y << "\n";
    return os;
}
sf::Sprite Personnage::Form(){
    return form.Sprite();
}
Vecteur Personnage::update(){
    Vecteur position(0, 0);
    position = physique.update();
    return position;
}
int Personnage::X(){
    return x;
}
int Personnage::Y(){
    return y;
}
void Personnage::addForce(Vecteur * v){
    physique.add(v);
}
void Personnage::removeForce(Vecteur * v){
    physique.remove(v);
}
void Personnage::setVitesseX(float value){
    physique.setVitesseX(value);
}
void Personnage::setVitesseY(float value){
    physique.setVitesseY(value);
}
Vecteur Personnage::move(float deplacementX, float deplacementY){
    x += deplacementX;
    y += deplacementY;
    form.setPosition(x, y);
}
void Personnage::Left(int value){
    x -= value;
    form.playAnimation(1);
}
void Personnage::Right(int value){
    x += value;
    form.playAnimation(2);
}
