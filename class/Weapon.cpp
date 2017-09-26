/*!
 * \file Weapon.cpp
 * \brief Fonction de la classe Weapon
 * \author Omer
 * \date 19 août 2017
 */
#include "../import.h"
#include "Weapon.h"
Weapon::Weapon(string ln){
     if(!img.loadFromFile(ln)){
        cout << "Error" << endl;
    }
    img.setSmooth(true);
    this->sprite.setTexture(img);
}
Weapon::~Weapon(){
 
}