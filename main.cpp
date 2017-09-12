/*!
 * \file main.cpp
 * \brief Programme principal
 * \author Omer
 * \date 9 août 2017
 */

#define VAR_GLOBALES
#include "import.h"

#include "class/Vecteur.h"
#include "class/Physique.h"
#include "class/Animation.h"
#include "class/Camera.h"
#include "class/Personnage.h"
#include "class/Platform.h"
#include "class/Grid.h"
#include "class/Level.h"
#include "class/Button.h"
#include "class/Menu.h"

int main()
{
    cout << "=========================================================================" << endl;
    BLOCK = 32;
    WIDTH = 2000;
    screenHEIGHT = 800;
    screenWIDTH = 1600;

    sf::RenderWindow window(sf::VideoMode(1600, 800), "Collision");
    window.setFramerateLimit(60);
    window.setPosition(sf::Vector2i(192, 0));
    //import des textures
    texture[0].loadFromFile("image/platform/png/Tiles/0.png");
    texture[1].loadFromFile("image/platform/png/Tiles/1.png");
    texture[2].loadFromFile("image/platform/png/Tiles/2.png");
    texture[3].loadFromFile("image/platform/png/Tiles/3.png");
    texture[4].loadFromFile("image/platform/png/Tiles/4.png");
    texture[5].loadFromFile("image/platform/png/Tiles/5.png");
    texture[6].loadFromFile("image/platform/png/Tiles/6.png");
    texture[7].loadFromFile("image/platform/png/Tiles/7.png");
    texture[8].loadFromFile("image/platform/png/Tiles/8.png");
    texture[9].loadFromFile("image/platform/png/Tiles/9.png");
    texture[10].loadFromFile("image/platform/png/Tiles/10.png");
    texture[11].loadFromFile("image/platform/png/Tiles/11.png");
    texture[12].loadFromFile("image/platform/png/Tiles/12.png");
    texture[13].loadFromFile("image/platform/png/Tiles/13.png");
    texture[14].loadFromFile("image/platform/png/Tiles/14.png");
    texture[15].loadFromFile("image/platform/png/Tiles/15.png");
    texture[16].loadFromFile("image/platform/png/Tiles/16.png");
    texture[17].loadFromFile("image/platform/png/Tiles/17.png");
    for(int i = 0; i < 18; i++)
        texture[i].setSmooth(true);

        //Lancement du niveau
    Level lvl;

        //menu
    Menu menuStart;
    if(menuStart.show(&window) == 0){
        window.close();
    }

    lvl.init();

    lvl.game(&window);
    
    return 0;
}
