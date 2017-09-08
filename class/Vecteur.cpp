/*!
 * \file Vecteur.cpp
 * \brief Fonction de la classe Vecteur
 * \author Omer
 * \date 9 août 2017
 */
#include "../import.h"
#include "Vecteur.h"
Vecteur::Vecteur(){
    this->x = 0;
    this->y = 0;
}
Vecteur::Vecteur(float x, float y){
    this->x = x;
    this->y = y;
}
Vecteur::Vecteur(float x, float y, string label){
    this->label = label;
    this->x = x;
    this->y = y;
}
void Vecteur::init(float x, float y){
    this->x = x;
    this->y = y;
}
Vecteur::~Vecteur(){

}
float Vecteur::X(){
    return x;
}
float Vecteur::Y(){
    return y;
}
Vecteur Vecteur::operator+(Vecteur v){
    Vecteur a(this->x + v.x, this->y + v.y);
    return a;
}
Vecteur Vecteur::operator=(Vecteur v){
    this->x = v.x;
    this->y = v.y;
    return *this;
}
Vecteur Vecteur::operator*(float value){
    Vecteur a(this->x * value, this->y * value);
    return a;
}
ostream& operator<<(ostream &os, Vecteur &v)
{ 
    os << "x: " << v.x << "| y: " << v.y << "\n";
    return os;
}