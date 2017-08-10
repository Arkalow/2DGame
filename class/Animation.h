/*!
 * \file Animation.h
 * \brief Prorotype de la classe Animation
 * \author Omer
 * \date 9 août 2017
 */
#ifndef ANIMATION_H
#define ANIMATION_H

/*! \class Animation
 * \brief Anime l'objet
 *
 *  La classe gere les animations d'un sprite
 */
class Animation
{
    private:
        //Animation
        bool updateFps; 
        int fpsCount;
        int fpsSpeed;
        int switchFps;
        sf::Clock time; 
        sf::Vector2i * anim; 

        //texture
        sf::Sprite sprite; /*!< le sprite qui va être affiché*/
        sf::Texture img; /*!< La feuille de style*/
    public:
        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Animation
         *
         *  \param string : lien de l'image
         */
        Animation(string);
        /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe Animation
         *
         */
        ~Animation();

        /*!
         *  \brief Joue l'animation
         *
         *  Procédure qui permet de faire avancer l'animation
         *
         *  \param int : Direction du personnage
         * 
         */
        void playAnimation(int);

        /*!
         *  \brief Accesseur de sprite
         *
         *  Methode qui permet d'accéder en lecture au membre sprite
         *
         *  \return retourne sprite
         * 
         */
        sf::Sprite Sprite();

        /*!
         *  \brief change la position du sprite
         *
         *  Procédure qui permet de positionner le sprite sur l'écran
         *
         *  \param int : x
         *  \param int : y
         * 
         */
        void setPosition(int, int);
};
#endif