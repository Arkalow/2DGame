#define VAR_GLOBALES
#include "import.h"
using namespace std;
#include "class/Cube.h"
#include "class/Platform.h"
#include "class/Grid.h"
#include "class/Level.h"
int main()
{
    cout << "=========================================================================";
    BLOCK = 32;
    WIDTH = 2000;
    screenHEIGHT = 600;
    screenWIDTH = 800;

    sf::RenderWindow window(sf::VideoMode(800, 600), "Collision");
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


    Level lvl;
    lvl.init();

    
    Cube a(200, 200);
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
        lvl.updateBackground(a.X(), a.Y());

        a.update();
        if(lvl.test(a.X(), a.Y() + 1) == false){
            a.Down();
        }else{
            // a.fall();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z)){
            if(lvl.test(a.X(), a.Y()+1) == false)
                a.Up();
        }if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)){
            a.Left();
        }if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
            a.Right();
        }
        window.clear();
        window.draw(lvl.Background());
        for(int i = 0; i < lvl.NbPlatform(); i++){
           for(int j = 0; j < lvl.platform[i].n; j++)
               window.draw(lvl.platform[i].Sprite(j));
        }
        window.draw(a.Form());
        window.display();
    }

    return 0;
}