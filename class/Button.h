/*!
 * \file Button.h
 * \brief Prorotype de la classe Button
 * \author Omer
 * \date 10 septembre 2017
 */
 #ifndef Button_H
 #define Button_H
 
 /*! \class Button
 * \brief gere les Buttons
 *
 *  La classe gere les Buttons du jeu
 */
 class Button
 {
private:
    sf::RectangleShape background;/*!< Background du bouton*/
    sf::Text label;/*!< Label du bouton*/
    int id;
    public:
        
        /*!
        *  \brief Constructeur
         *
         *  Constructeur de la classe Button
         *
         */
         Button();
         
        /*!
        *  \brief Destructeur
         *
         *  Destructeur de la classe Button
         *
         */
        ~Button();
        
        /*!
         *  \brief affiche le bouton
         *
         *  Procédure qui affiche le bouton avec la fonction draw de window
         *
         *  \param sf::RenderWindow * : window
         * 
         */
        void draw(sf::RenderWindow *);

        /*!
         *  \brief change la position
         *
         *  Procédure qui change la position du bouton
         *
         *  \param int : position sur x
         *  \param int : position sur y
         * 
         */
        void setPosition(int, int);

        /*!
         *  \brief selectionne le bouton
         *
         *  Procédure qui allume le bouton
         * 
         */
        void hight();

        /*!
         *  \brief deselectionne le bouton
         *
         *  Procédure qui eteint le bouton
         * 
         */    
        void low();
};
#endif