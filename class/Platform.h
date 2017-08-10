/*!
 * \file Platform.h
 * \brief Prorotype de la classe Platform
 * \author Omer
 * \date 9 août 2017
 */

#ifndef PLATFORM_H
#define PLATFORM_H

/*! \class Platform
 * \brief gere les patforms
 *
 *  La classe gere la création et l'affichage des platforms 
 */
class Platform
{
    private:
        sf::Sprite * sprite;
        int height;
        int width;
        int x;
        int y;
    public:
        int n;

        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Platform
         *
         *  \param int : Coordonnées sur x du côté supérieur gauche en BLOCK
         *  \param int : Coordonnées sur x du côté supérieur gauche en BLOCK
         *  \param int : Largeur de la platform en BLOCK
         *  \param int : Hauteur de la platform en BLOCK
         */
        Platform(int, int, int, int);
        /*!
         *  \brief Constructeur
         *
         *  Constructeur vide de la classe Platform
         *
         */
        Platform();
        /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe Platform
         *
         */
        ~Platform();

        /*!
         *  \brief initialise une platform
         *
         *  Procédure qui créer une platform et l'enregistre dans la grille de la map
         *
         *  \param int : Coordonnées sur x du côté supérieur gauche en BLOCK
         *  \param int : Coordonnées sur x du côté supérieur gauche en BLOCK
         *  \param int : Largeur de la platform en BLOCK
         *  \param int : Hauteur de la platform en BLOCK
         */
        void init(int, int, int, int);

        /*!
         *  \brief Accesseur d'un des sprites
         *
         *  Methode qui permet d'accéder en lecture à l'un des sprites de la platform
         *
         *  \param int : numéro du sprite
         *
         *  \return retourne sprite[int]
         * 
         */
        sf::Sprite Sprite(int);

        /*!
         *  \brief Accesseur de x
         *
         *  Methode qui permet d'accéder en lecture au membre x de la platform
         *
         *  \return retourne x
         * 
         */
        int X();

        /*!
         *  \brief Accesseur de y
         *
         *  Methode qui permet d'accéder en lecture au membre y de la platform
         *
         *  \return retourne y
         * 
         */
        int Y();

        /*!
         *  \brief Accesseur de width
         *
         *  Methode qui permet d'accéder à la largeur de la platform
         *
         *  \return retourne width
         * 
         */
        int Width();

        /*!
         *  \brief Accesseur de height
         *
         *  Methode qui permet d'accéder à la hauteur de la platform
         *
         *  \return retourne height
         * 
         */
        int Height();

};
#endif