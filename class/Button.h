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
};
#endif