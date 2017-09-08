/*!
 * \file Physique.cpp
 * \brief Fonction de la classe Physique
 * \author Omer
 * \date 9 août 2017
 */
#include "../import.h"
#include "Vecteur.h"
#include "Physique.h"
Physique::Physique() : acceleration(0, 0), vitesse(0, 0){
    
}
Physique::~Physique(){
    
}
void Physique::add(Vecteur v){
    acceleration = acceleration + v;
}
void Physique::remove(Vecteur v){
    acceleration = acceleration + (v * -1);
}
Vecteur Physique::update(){
    Vecteur position(0, 0);
    //primitive comme t est toujours à 1 acceleration = vitesse
    vitesse = acceleration + vitesse;
    position = vitesse * float(0.5);
    return position;
}
void Physique::setVitesseX(float value){
    Vecteur tmp(value, vitesse.Y());
    vitesse = tmp;
}
void Physique::setVitesseY(float value){
    Vecteur tmp(vitesse.X(), value);
    vitesse = tmp;
}