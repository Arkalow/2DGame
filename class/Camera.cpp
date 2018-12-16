/*!
 * \file Camera.cpp
 * \brief Fonction de la classe Camera
 * \author Omer
 * \date 9 août 2017
 */
#include "../import.h"
#include "Camera.h"

Camera::Camera(int position){
    this->position = position;
    //camera.setViewport(sf::FloatRect(0, 0, 1, 1));//Vue de gauche
}

Camera::~Camera(){

}

/**
* @desc cammera centré sur la cible
*/
sf::View Camera::updateCamera(int x, int y){

    sf::Vector2f position(x + BLOCK / 2 - screenWIDTH / 2, 0);
    if(position.x < 0) position.x = 0;
    if(position.y < 0) position.y = 0;
    camera.reset(sf::FloatRect(position.x, position.y, screenWIDTH, screenHEIGHT));
    return camera;
}