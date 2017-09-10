/*!
 * \file Level.cpp
 * \brief Fonction de la classe Level
 * \author Omer
 * \date 9 août 2017
 */
#include "../import.h"
#include "Button.h"
Button::Button() : background(), label(){
    background.setSize(sf::Vector2f(100, 50));
    background.setOutlineColor(sf::Color::Red);
    background.setOutlineThickness(5);
    background.setPosition(10, 20);

    label.setString("test");
}
Button::~Button(){

}
void Button::draw(sf::RenderWindow * window){
    window->draw(background);
    window->draw(label);
} 