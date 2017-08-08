#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
#include "Vecteur.h"
#include "Physique.h"
Physique::Physique() : acceleration(0, 0), vitesse(0, 0){
    for(int i = 0; i < 5; i++){
        vecteurs[i] = NULL;
    }
}
Physique::~Physique(){
    for(int i = 0; i < 5; i++){
        if(vecteurs[i] != NULL)
            delete vecteurs[i];
    }
}
void Physique::add(Vecteur * v){
    for(int i = 0; i < 5; i++){
        if(vecteurs[i] == NULL){
            vecteurs[i] = v;
            return;
        }
    }
}
void Physique::remove(Vecteur * v){
    for(int i = 0; i < 5; i++){
        if(vecteurs[i] == v)
            vecteurs[i] = NULL;
    }
}
Vecteur Physique::update(){
    Vecteur position(0, 0);
    acceleration.init(0, 0);
    for(int i = 0; i < 5; i++){
        if(vecteurs[i] != NULL){
            acceleration = acceleration + *vecteurs[i];
            // cout << i << " " << *vecteurs[i] << endl;
        }
    }
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