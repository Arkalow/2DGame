/*!
 * \file Weapon.cpp
 * \brief Fonction de la classe Weapon
 * \author Omer
 * \date 19 août 2017
 */
#include "../import.h"
#include "Weapon.h"
Weapon::Weapon(int x, int y, string ln){
     if(!img.loadFromFile(ln)){
        cout << "Error" << endl;
    }
    img.setSmooth(true);
    this->form.setTexture(img);
    //découpage du sprite
    this->form.setTextureRect(sf::IntRect(237, 0, 237, 102));
    this->form.setScale(0.2, 0.2);
    this->Right();
}
Weapon::~Weapon(){
 
}
sf::Sprite Weapon::Form(){
	return form;
}
void Weapon::setPosition(int x, int y){
	this->form.setPosition(x + this->decaX, y + this->decaY);
}
void Weapon::Left(){
	this->form.setTextureRect(sf::IntRect(0, 0, 237, 102));
	this->decaX = -1 * BLOCK + 10;
    this->decaY = 12;
}
void Weapon::Right(){
	this->form.setTextureRect(sf::IntRect(237, 0, 237, 102));
	this->decaX = 5;
    this->decaY = 12;
}