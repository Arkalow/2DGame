/*!
 * \file Level.cpp
 * \brief Fonction de la classe Level
 * \author Omer
 * \date 9 août 2017
 */
#include "../import.h"
#include "Button.h"
#include "Menu.h"
Menu::Menu(){
    sf::RectangleShape rectangle;
    n = 2;
    boutons = new Button[n];
}
Menu::~Menu(){
    delete boutons;
}
void Menu::draw(sf::RenderWindow * window){
    for(int i = 0; i < n; i++){
        boutons[i].draw(window);
    }
    window->draw(background);  
} 