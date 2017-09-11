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

    for(int i = 0; i < n; i++){
        boutons[i].setPosition(100, i * 100 + 100);
    }
    select = 0;
    boutons[select].hight();
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
        
            /*Selection du menu*/
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){//Entrer
            if(select == 0){
                return 1;
            }
        }

            /*Scroling*/
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z)){//haut
            if(select > 0){
                boutons[select].low();
                boutons[select].draw(window);
                select--;
                boutons[select].hight();
                boutons[select].draw(window);
            }
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){//bas
            if(select < n - 1){
                boutons[select].low();
                boutons[select].draw(window);
                select++;
                boutons[select].hight();
                boutons[select].draw(window);
            }
        }

        
        window->display();
    }
    return 0;
}