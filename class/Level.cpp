#include "../import.h"
#include "Grid.h"
#include "Platform.h"
#include "Level.h"
/**
* @desc Constructeur
*/
Level::Level(){

}
void Level::init(){
    platform = new Platform[3];
    platform[0].init(5, 4, 3, 1);
    platform[2].init(9, 7, 3, 4);
    platform[1].init(2, 5, 5, 4);
    nbPlatform = 3;

    backgroundTexture.loadFromFile("image/platform/png/BG/BG.png");
    background.setPosition(0, 0);
    background.setTexture(backgroundTexture);

    map = new Grid(100, 50);
    
    for(unsigned int i = 0; i < nbPlatform; i++){
        //cout << "Platform" << i <<endl;
        for(unsigned int y = platform[i].Y() * 2; y < platform[i].Y() * 2 + platform[i].Height() * 2; y++){
            for(unsigned int x = platform[i].X() * 2; x < platform[i].X() * 2 + platform[i].Width() * 2; x++){
                map->set(x, y, 1);
                //cout << "Map || " << "x: " << x << "| " << "y: " << y << endl;
            }
        }
    }


}
/**
* @desc Destructeur
*/
Level::~Level(){
    delete[] platform;
}
/**
* @desc return nbPlatform
*/
int Level::NbPlatform(){
    return nbPlatform;
}
sf::Sprite Level::Background(){
    return background;
}
void Level::updateBackground(int x, int y){
    if(x > screenWIDTH /2){
        background.setPosition(x - screenWIDTH /2, 0);
    }else{
        background.setPosition(0, 0);
    }
}
int Level::operator()(int x, int y){
    return map->G(x, y);
}
bool Level::test(int x, int y){
    if(map->G(x/BLOCK, y/BLOCK) != 1){
        if(x % BLOCK != 1 && y % BLOCK != 1){
            if(map->G(x/BLOCK + 1, y/BLOCK + 1) != 1 && map->G(x/BLOCK + 1, y/BLOCK) != 1 && map->G(x/BLOCK, y/BLOCK + 1) != 1)
                return true;  
        }else if(x % BLOCK != 1){
            if(map->G(x/BLOCK + 1, y/BLOCK) != 1)
                return true;
        }else if(y % BLOCK != 1){
            if(map->G(x/BLOCK, y/BLOCK + 1) != 1)
                return true; 
        }else{
            return true;
        }
    }else{
        return false;
    }
}