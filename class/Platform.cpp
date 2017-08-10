/*!
 * \file Platform.cpp
 * \brief Fonction de la classe Platform
 * \author Omer
 * \date 9 août 2017
 */
#include "../import.h"
#include "Platform.h"
sf::Sprite Platform::Sprite(int n)
{
    if(sprite != NULL)
        return sprite[n];

    sf::Sprite resultat;
    return resultat;
}
/**
* @desc Destructeur
*/
Platform::~Platform(){
    if(sprite != NULL)
        delete[] sprite;
}
/**
* @desc Constructeur vide
*/
Platform::Platform(){
    n = 0;
    sprite = NULL;
    height = 0;
    width = 0;
    x = 0;
    y = 0;
}
/**
* @desc Constructeur
*/
void Platform::init(int x, int y, int width, int height)
{
    this->x = x;
    this->y = y;
    if(height < 1 || width < 3){
        width = 3;
        height = 1;
    }
    this->width = width;
    this->height = height;
    
    n = width * height;

    if(sprite != NULL)
        delete sprite;

    sprite = new sf::Sprite[n];

    /*  Platform simple */
    if(height == 1 && width >= 3){
        //première case
        int i;
        int positionX = x * BLOCK * 2;
        int positionY = y * BLOCK * 2;
        sprite[0].setPosition(positionX, positionY);
        sprite[0].setTexture(texture[13]);
        sprite[0].setScale(0.5, 0.5);
        //case n
        for(i = 1; i < width-1; i++){
            sprite[i].setTexture(texture[14]);
            positionX += BLOCK * 2;
            sprite[i].setPosition(positionX, positionY);
            sprite[i].setScale(0.5, 0.5);
        }
        //dernière case
        positionX += BLOCK * 2;
        sprite[i].setTexture(texture[15]);
        sprite[i].setPosition(positionX, positionY);
        sprite[i].setScale(0.5, 0.5);
    }
    /*PLatform epaisse*/
    else{
        /* Ligne 1 */
            //première case
        int i;
        int positionX = x * BLOCK * 2;
        int positionY = y * BLOCK * 2;
        sprite[0].setPosition(positionX, positionY);
        sprite[0].setTexture(texture[1]);
        sprite[0].setScale(0.5, 0.5);
            //case n
        for(i = 1; i < width-1; i++){
            sprite[i].setTexture(texture[2]);
            positionX += BLOCK * 2;
            sprite[i].setPosition(positionX, positionY);
            sprite[i].setScale(0.5, 0.5);
        }
            //denière case
        positionX += BLOCK * 2;
        sprite[i].setTexture(texture[3]);
        sprite[i].setPosition(positionX, positionY);
        sprite[i].setScale(0.5, 0.5);
        i++;
        

        /*Ligne n*/
        int j = 0;
        for(j = 1; j < height - 1; j++){
            positionX = x * BLOCK * 2;
            positionY += BLOCK * 2;

            //première case
            sprite[i].setPosition(positionX, positionY);
            sprite[i].setTexture(texture[4]);
            positionX += BLOCK * 2;
            sprite[i].setScale(0.5, 0.5);
            i++;
            //case n
            for(int k = 1; k < width-1; k++){
                sprite[i].setTexture(texture[5]);
                sprite[i].setPosition(positionX, positionY);
                positionX += BLOCK * 2;
                sprite[i].setScale(0.5, 0.5);
                i++;
            }
            //derniere case
            sprite[i].setTexture(texture[6]);
            sprite[i].setPosition(positionX, positionY);
            sprite[i].setScale(0.5, 0.5);
            i++;
        }


        /*Dernière ligne*/

        positionY += BLOCK * 2;
        positionX = x * BLOCK * 2;

            //première case
        sprite[i].setPosition(positionX, positionY);
        sprite[i].setTexture(texture[12]);
        positionX += BLOCK * 2;
        sprite[i].setScale(0.5, 0.5);
        i++;
            //case n
        for(j = 1; j < width - 1; j++){
            sprite[i].setPosition(positionX, positionY);
            sprite[i].setTexture(texture[9]);
            positionX += BLOCK * 2;
            sprite[i].setScale(0.5, 0.5);
            i++;
        }
            //dernière case
        sprite[i].setPosition(positionX, positionY);
        sprite[i].setTexture(texture[16]);
        sprite[i].setScale(0.5, 0.5);

    }
}
int Platform::X(){
    return x;
}
int Platform::Y(){
    return y;
}
int Platform::Height(){
    return height;
}
int Platform::Width(){
    return width;
}