#include "../import.h"
#include "Animation.h"
Animation::Animation(string ln){
    this->switchFps = 100;
    this->fpsCount = 0;
    this->fpsSpeed = 500;
    this->updateFps = false;
    if(!img.loadFromFile(ln)){
        cout << "Error" << endl;
    }
    img.setSmooth(true);
    this->sprite.setTexture(img);
    anim = new sf::Vector2i(1, 0);
    //découpage du sprite
    this->sprite.setTextureRect(sf::IntRect(anim->x * 32, anim->y * 32, 32, 32));
}
Animation::~Animation(){
    delete anim;
}
/**
* @desc Joue l'animation
*/
void Animation::playAnimation(int dir){
    this->anim->y = dir;
    fpsCount += fpsSpeed * time.restart().asSeconds();
    fpsSpeed = 500;
    if(fpsCount >= switchFps){
        fpsCount = 0;
        anim->x++;
        if(anim->x >= 2)
            anim->x = 0;    
    }
    sprite.setTextureRect(sf::IntRect(anim->x * 32, anim->y * 32, 32, 32));
}
/**
* @desc Acesseur du sprite
*/
sf::Sprite Animation::Sprite(){
    return sprite;
}
/**
* @desc modifie l'emplacement du sprite
*/
void Animation::setPosition(int x, int y){
    sprite.setPosition(x, y);
}
