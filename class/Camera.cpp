#include "../import.h"
#include "Camera.h"
Camera::Camera(){

}
Camera::~Camera(){

}
/**
* @desc cammera centré sur la cible
*/
sf::View Camera::updateCamera(int x, int y){
    camera.reset(sf::FloatRect(0, 0,screenWIDTH, screenHEIGHT));
    sf::Vector2f position(screenWIDTH / 2, screenHEIGHT / 2);
    position.x = x + BLOCK / 2 - screenWIDTH / 2;
    position.y = 0; //y + BLOCK / 2 - screenHEIGHT / 2;
    if(position.x < 0)
        position.x = 0;
    if(position.y < 0)
        position.y = 0;
    camera.reset(sf::FloatRect(position.x, position.y, screenWIDTH, screenHEIGHT));
    return camera;
}