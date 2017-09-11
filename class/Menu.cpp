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
    n = 2;
    boutons = new Button[n];
    background.setSize(sf::Vector2f(screenWIDTH, screenHEIGHT));
    background.setFillColor(sf::Color::Red);
    background.setPosition(0, 0);
}
Menu::~Menu(){
    delete[] boutons;
}
int Menu::show(sf::RenderWindow * window){
    window->clear();
    
    window->draw(background);
    for(int i = 0; i < n; i++){
        boutons[i].draw(window);
    }

    window->display();
    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            //fermeture de la fenetre
            if (event.type == sf::Event::Closed)
                return 0;
            }
        
        /*AFFICHAGE*/
        
    }
    return 0;
}