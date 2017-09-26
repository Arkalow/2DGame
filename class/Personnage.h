/*!
 * \file Personnage.h
 * \brief Prorotype de la classe Personnage
 * \author Omer
 * \date 9 août 2017
 */
#ifndef PERSONNAGE_H
#define PERSONNAGE_H

/*! \class Personnage
 * \brief représente un personnage du jeu
 *
 *  La classe représente tout les types de personnage
 */
class Personnage
{
    private:
        int x, y;
        Animation form;
        Camera cam;
        Weapon gun;
    public:
        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Personnage
         *
         *  \param int : position x
         *  \param int : position y
         *  \param string : lien de l'image
         *  \param int : touche de jump
         *  \param int : touche de gauche
         *  \param int : touche de droite
         *  \param int : 0 -> vue de gauche 1 -> vue de droite
         */
        Personnage(int, int, string, sf::Keyboard::Key, sf::Keyboard::Key, sf::Keyboard::Key, int);

        /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe Personnage
         *
         */
        ~Personnage();

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
         *  \brief Accesseur de x
         *
         *  Methode qui permet d'accéder en lecture au membre x
         *
         *  \return retourne x
         * 
         */
        int X();

        /*!
         *  \brief Accesseur de y
         *
         *  Methode qui permet d'accéder en lecture au membre y
         *
         *  \return retourne y
         * 
         */
        int Y();

        /*!
         *  \brief Accesseur de la camera
         *
         *  Methode qui permet d'accéder en lecture au membre cam
         *
         *  \return retourne cam
         * 
         */
        sf::View Cam();

        /*!
         *  \brief Change la vitesse sur x
         *
         *  Procédure qui modifie la vitesse sur x
         *
         *  \param float : vitesse sur x
         * 
         */        
        void setVitesseX(float);

        /*!
         *  \brief Change la vitesse sur y
         *
         *  Procédure qui modifie la vitesse sur y
         *
         *  \param float : vitesse sur y
         * 
         */
        void setVitesseY(float);

        /*!
         *  \brief Déplace le personnage
         *
         *  Procédure qui ajoute une valeur au coordonnées du personnage 
         *
         *  \param float : x
         *  \param float : y
         *
         */
        void move(float, float);


        /*!
         *  \brief Déplace le personnage sur x vers la droite
         *
         *  Procédure qui ajoute une valeur au coordonnées de x du personnage 
         *
         *  \param int : valeur x à ajouter
         *
         */
        void Right(int);

        /*!
         *  \brief Déplace le personnage sur x vers la gauche
         *
         *  Procédure qui ajoute une valeur au coordonnées de x du personnage 
         *
         *  \param int : valeur x à ajouter
         *
         */        
        void Left(int);
        
        Physique physique;/*!< physique des forces sur le personnage*/

        friend ostream& operator<<(ostream&, Personnage&);
        
        sf::Keyboard::Key jump; /*!< touche jump*/
        sf::Keyboard::Key left; /*!< touche gauche*/
        sf::Keyboard::Key right; /*!< touche droite*/
};
#endif