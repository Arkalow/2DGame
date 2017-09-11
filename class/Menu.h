/*!
 * \file Menu.h
 * \brief Prorotype de la classe Menu
 * \author Omer
 * \date 10 septembre 2017
 */
#ifndef Menu_H
#define Menu_H

/*! \class Menu
 * \brief gere les Menus
 *
 *  La classe gere les Menus du jeu
 */
class Menu
{
    private:
        Button * boutons; /*!< tableau des boutons qui composent le menu*/
        int n; /*!< nombre de boutons*/
        sf::RectangleShape background; /*!< background du menu*/
    public:
    
        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Menu
         *
         */
        Menu();
        
        /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe Menu
         *
         */
        ~Menu();

        /*!
         *  \brief affiche le menu
         *
         *  Procédure qui affiche le menu avec la fonction draw de window
         *
         *  \param sf::RenderWindow * : window
         * 
         */
        int show(sf::RenderWindow *);
};
#endif