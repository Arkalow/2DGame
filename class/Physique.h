/*!
 * \file Physique.h
 * \brief Prorotype de la classe Physique
 * \author Omer
 * \date 9 août 2017
 */
#ifndef PHYSIQUE_H
#define PHYSIQUE_H

/*! \class Physique
 * \brief Physique des forces
 *
 *  La classe permet de donnés des forces à un objet
 */
class Physique
{
    private:
        Vecteur forces; /*!< Forces appliqué à l'objet*/
        Vecteur acceleration; /*!< L'accélération de l'objet*/
        Vecteur vitesse; /*!< Vitesse de l'objet*/
    public:
        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Physique
         *
         */
        Physique();
        /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe Physique
         *
         */
        ~Physique();

        /*!
         *  \brief Ajouter une force
         *
         *  Procédure qui ajoute une force qui s'appliquera à l'objet 
         *
         *  \param Vecteur : vecteur force à ajouter
         *
         */          
        void add(Vecteur);

        /*!
         *  \brief recalcul
         *
         *  Methode qui calcul la trajectoire de l'objet
         *
         *  \return retourne un vecteur qui contient la prochaine destionation de l'objet par rapport à sa trajectoire
         * 
         */
        Vecteur update();

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
};
#endif