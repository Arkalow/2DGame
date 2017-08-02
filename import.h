#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

#ifdef VAR_GLOBALES
    int HEIGHT;
    int WIDTH;
    int screenHEIGHT;
    int screenWIDTH;
    int BLOCK; 
    float g = 9.81;
    sf::Texture texture[18];
#else    
    extern int HEIGHT;
    extern int WIDTH;
    extern int screenHEIGHT;
    extern int screenWIDTH;
    extern int BLOCK; 
    extern float g;
    extern sf::Texture texture[18];
#endif