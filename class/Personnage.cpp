/*!
 * \file Personnage.cpp
 * \brief Fonction de la classe Personnage
 * \author Omer
 * \date 9 août 2017
 */
#include "../import.h"
#include "Vecteur.h"
#include "Physique.h"
#include "Animation.h"
#include "Camera.h"
#include "Personnage.h"
Personnage::Personnage(int x, int y, string ln, sf::Keyboard::Key jump, sf::Keyboard::Key left, sf::Keyboard::Key right, int position)
 : form(ln), cam(position){
    this->x = x;
    this->y = y;
    form.setPosition(x, y);
    this->jump = jump;
    this->left = left;
    this->right = right;
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
int Personnage::X(){
    return x;
}
int Personnage::Y(){
    return y;
}
void Personnage::setVitesseX(float value){
    physique.setVitesseX(value);
}
void Personnage::setVitesseY(float value){
    physique.setVitesseY(value);
}
void Personnage::move(float deplacementX, float deplacementY){
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
sf::View Personnage::Cam(){
    return cam.updateCamera(x, y);
}
