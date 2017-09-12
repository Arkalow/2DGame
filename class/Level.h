/*!
 * \file Level.h
 * \brief Prorotype de la classe Level
 * \author Omer
 * \date 9 août 2017
 */
#ifndef LEVEL_H
#define LEVEL_H

/*! \class Level
 * \brief gere les levels
 *
 *  La classe gere les levels du jeu
 */
class Level
{
    private:
        int nbPlatform; /*!< Nombre de platform*/
        sf::Texture backgroundTexture; /*!< image du background*/
        sf::Sprite background; /*!< sprte du background*/
        Grid * map; /*!< grille qui contient l'emplacement des murs*/
        Personnage * player1;
        Personnage * player2;
        void deplacementPersonnage(Personnage *); /*!< Colision du personnage*/
        void gestionClavier(Personnage *); /*!< gère les actions clavier et deplace le personnage*/
    public:
        Platform * platform;

        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Level
         *
         */
        Level();
        
        /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe Level
         *
         */
        ~Level();

        /*!
         *  \brief Accesseur de NbPlatform
         *
         *  Methode qui permet d'accéder au membre NbPlatform en lecture
         *
         *  \return retourne NbPlatform
         * 
         */
        int NbPlatform();

        /*!
         *  \brief Accesseur de background
         *
         *  Methode qui permet d'accéder au membre background en lecture
         *
         *  \return retourne background
         * 
         */ 
        sf::Sprite Background();

        /*!
         *  \brief Met à jour le fond
         *
         *  Procédure qui positionne le fond par rapport au centre de l'objet
         *
         *  \param int : x
         *  \param int : y
         * 
         */
        void updateBackground(int, int);  

        /*!
         *  \brief operateur ()
         *
         *  Methode qui renseigne la valeur de la case pointé
         *
         *  \param int : x en BLOCK
         *  \param int : y en BLOCK
         *
         *  \return retourne 0 si il n'y a pas de mur
         * 
         */  
        int operator()(int, int);

        /*!
         *  \brief initialisation
         *
         *  Procédure initialise un level
         * 
         */
        void init();

        /*!
         *  \brief test sur la grille
         *
         *  Methode qui teste la valeur d'une case
         *
         *  \param int : x en BLOCK
         *  \param int : y en BLOCK
         *
         *  \return retourne false si il n'y a pas de mur sinon retourn true
         * 
         */ 
        bool test(int, int);

        int game(sf::RenderWindow *);
        
};
#endif