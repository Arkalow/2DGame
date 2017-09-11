/*!
 * \file Level.cpp
 * \brief Fonction de la classe Level
 * \author Omer
 * \date 9 août 2017
 */
#include "../import.h"
#include "Button.h"
Button::Button() : background(), label(){
    background.setSize(sf::Vector2f(300, 70));
    background.setFillColor(sf::Color::Blue);
    background.setPosition(0, 0);

    label.setString("test");
    label.setColor(sf::Color::Green);
}
Button::~Button(){

}
void Button::draw(sf::RenderWindow * window){
    window->draw(background);
    window->draw(label);
} 