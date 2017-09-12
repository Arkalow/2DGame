/*!
 * \file Level.cpp
 * \brief Fonction de la classe Level
 * \author Omer
 * \date 9 août 2017
 */
#include "../import.h"
#include "Vecteur.h"
#include "Physique.h"
#include "Animation.h"
#include "Camera.h"
#include "Personnage.h"
#include "Platform.h"
#include "Grid.h"
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
    
    for(int i = 0; i < nbPlatform; i++){
        //cout << "Platform" << i <<endl;
        for(int y = platform[i].Y() * 2; y < platform[i].Y() * 2 + platform[i].Height() * 2; y++){
            for(int x = platform[i].X() * 2; x < platform[i].X() * 2 + platform[i].Width() * 2; x++){
                map->set(x, y, 1);
                //cout << "Map || " << "x: " << x << "| " << "y: " << y << endl;
            }
        }
    }



    //Création du personnage
    player1 = new Personnage(8*BLOCK, 3*BLOCK, "image/sprite/perso1.png", sf::Keyboard::Z, sf::Keyboard::Q, sf::Keyboard::D);
    player2 = new Personnage(9*BLOCK, 4*BLOCK, "image/sprite/perso2.png", sf::Keyboard::O, sf::Keyboard::K, sf::Keyboard::M);

    //Ajout d'une gravité au personnage
    Vecteur gravity(0, 4);
    player1->physique.add(gravity);
    player2->physique.add(gravity);
}

/**
* @desc Destructeur
*/
Level::~Level(){
    delete[] platform;
    delete player1;
    delete player2;
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
void Level::deplacementPersonnage(Personnage * pers){
    /*  DEPLACEMENT */
    Vecteur deplacement;
    deplacement = pers->physique.update();
    int dpX = deplacement.X();
    int dpY = deplacement.Y();
    while(test(pers->X()+dpX, pers->Y()+dpY) == true){
        if(dpX > 0){
            dpX--;
        }else if(dpX < 0){
            dpX++;
        }
        if(dpY > 0){
            dpY--;

        }else if(dpY < 0){
            dpY++;
        }
    }     
    pers->move(dpX, dpY);
    if(test(pers->X(), pers->Y() + 1) == true){
        pers->setVitesseY(0);
        pers->setVitesseX(0);
    }
}

    /*GESTION CLAVIER*/
void Level::gestionClavier(Personnage * pers){
    if(sf::Keyboard::isKeyPressed(pers->jump)){//JUMP
        if(test(pers->X(), pers->Y() + 1) == true){
            pers->setVitesseY(-50);
        }
    }if(sf::Keyboard::isKeyPressed(pers->left)){
        if(test(pers->X() - 5, pers->Y()) == false){
            pers->Left(5);
        }

    }if(sf::Keyboard::isKeyPressed(pers->right)){
        if(test(pers->X() + 5, pers->Y()) == false){
            pers->Right(5);
            
        }
    }
}
int Level::game(sf::RenderWindow * window){
    window->clear();
    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            //fermeture de la fenetre
            if (event.type == sf::Event::Closed)
                window->close();
            }
        //Positionnement de la camera
        window->setView(player1->Cam());
        //positionnement du decor
        updateBackground(player1->X(), player1->Y());

        

        deplacementPersonnage(player1);
        deplacementPersonnage(player2);

        gestionClavier(player1);
        gestionClavier(player2);



        /*AFFICHAGE*/
        window->clear();
        window->draw(Background());
        for(int i = 0; i < NbPlatform(); i++){
           for(int j = 0; j < platform[i].n; j++)
               window->draw(platform[i].Sprite(j));
        }
        window->draw(player1->Form());
        window->draw(player2->Form());
        window->display();
    }
    return 0;
}