//CONSTANTE
float g = 9.81;

#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
enum{Up, Left, Right};
#include "class/Cube.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Collision");
    window.setFramerateLimit(60);
    window.setPosition(sf::Vector2i(192, 0));
    
    
    
    Cube a(200, 300);
    window.clear();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            //fermeture de la fenetre
            if (event.type == sf::Event::Closed)
                window.close();
        }
        cout <<a;
        a.update();
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z)){
            a.Up();
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)){
            a.Left();
        }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
            a.Right();
        }
        window.clear();
        window.draw(a.Form());
        window.display();
    }

    return 0;
}