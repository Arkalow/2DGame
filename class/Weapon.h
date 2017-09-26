/*!
 * \file Weapon.h
 * \brief Prorotype de la classe Weapon
 * \author Omer
 * \date 19 septembre 2017
 */
 #ifndef Weapon_H
 #define Weapon_H
 
 /*! \class Weapon
  * \brief gere les Weapons
  *
  *  La classe gere les Weapons du jeu
  */
 class Weapon
 {
     private:
        int x, y;

        //texture
        sf::Sprite sprite; /*!< le sprite qui va être affiché*/
        sf::Texture img; /*!< La feuille de style*/
     public:
     
         /*!
          *  \brief Constructeur
          *
          *  Constructeur de la classe Weapon
          *
          *  \param string : lien de l'image
          */
         Weapon(string);
         
         /*!
          *  \brief Destructeur
          *
          *  Destructeur de la classe Weapon
          *
          */
         ~Weapon();
 
         /*!
          *  \brief affiche le Weapon
          *
          *  Procédure qui affiche le Weapon avec la fonction draw de window
          *
          *  \param sf::RenderWindow * : window
          * 
          */
         int show(sf::RenderWindow *);
 };
 #endif