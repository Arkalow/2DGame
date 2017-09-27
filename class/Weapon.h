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
        int decaX;
        int decaY;
        //texture
        sf::Sprite form; /*!< le form qui va être affiché*/
        sf::Texture img; /*!< La feuille de style*/
     public:
     
         /*!
          *  \brief Constructeur
          *
          *  Constructeur de la classe Weapon
          *
          *  \param string : lien de l'image
          */
         Weapon(int, int, string);
         
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

         /*!
         *  \brief Accesseur de form
         *
         *  Methode qui permet d'accéder en lecture au membre form
         *
         *  \return retourne form
         * 
         */
        sf::Sprite Form();

        /*!
         *  \brief change la position du gun
         *
         *  Procédure qui permet de positionner le gun sur l'écran
         *
         *  \param int : x
         *  \param int : y
         * 
         */
        void setPosition(int, int);

        void Left();
        void Right();
 };
 #endif