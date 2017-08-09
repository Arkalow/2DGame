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
    nbPlatform = 9;
    platform = new Platform[nbPlatform];
    platform[0].init(3, 3, 3, 1);
    platform[1].init(4, 7, 13, 4);
    platform[2].init(12, 5, 3, 1);
    platform[3].init(16, 2, 5, 4);
    platform[4].init(23, 5, 6, 1);
    platform[5].init(30, 3, 9, 4);
    platform[6].init(43, 5, 8, 8);

    platform[7].init(0, 0, 3, 15);
    platform[8].init(51, 0, 10, 15);

    backgroundTexture.loadFromFile("image/platform/png/BG/BG.png");
    background.setPosition(0, 0);
    background.setTexture(backgroundTexture);

    map = new Grid(200, 80);
    
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
bool Level::test(int x, int y){//Ya un mur ???
    if(map->G(x/BLOCK, y/BLOCK) == 1){//sur un mur
        return true;
    }else{
        if(x % BLOCK == 0 && y % BLOCK == 0){//pile sur une case
            return false;
        }else if(x % BLOCK == 0){//x est aligné
            if(map->G(x/BLOCK, y/BLOCK + 1) == 1){//ya un mur en dessous
                return true;
            }else{
                return false;
            }
        }else if(y % BLOCK == 0){//y est aligné
            if(map->G(x/BLOCK + 1, y/BLOCK) == 1){//ya un mur à droite
                return true;
            }else{
                return false;
            }
        }else{
            if(map->G(x/BLOCK + 1, y/BLOCK + 1) == 1 || map->G(x/BLOCK, y/BLOCK + 1) == 1 || map->G(x/BLOCK + 1, y/BLOCK) == 1){
                return true;
            }else{
                return false;
            }
        }
    }
}