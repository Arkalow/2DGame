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
    if(this->position == 0){
        camera.setViewport(sf::FloatRect(0, 0, 0.495, 1));//Vue de gauche
    }else{
        camera.setViewport(sf::FloatRect(0.505, 0, 0.495, 1));//vue de droite
    }
}
Camera::~Camera(){

}
/**
* @desc cammera centré sur la cible
*/
sf::View Camera::updateCamera(int x, int y){
    camera.reset(sf::FloatRect(0, 0, screenWIDTH, screenHEIGHT));
    sf::Vector2f position(0, 0);
    position.x = x + BLOCK / 2 - screenWIDTH / 2;
    position.y = 0; //y + BLOCK / 2 - screenHEIGHT / 2;
    if(position.x < 0)
        position.x = 0;
    if(position.y < 0)
        position.y = 0;
    camera.reset(sf::FloatRect(position.x, position.y, screenWIDTH, screenHEIGHT));
    return camera;
}