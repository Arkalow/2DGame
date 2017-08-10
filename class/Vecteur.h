/*!
 * \file Vecteur.h
 * \brief Prorotype de la classe Vecteur
 * \author Omer
 * \date 9 août 2017
 */
#ifndef VECTEUR_H
#define VECTEUR_H

/*! \class Vecteur
 * \brief représente un vecteur de float
 *
 *  La classe gere représente un vecteur pour simplifier les calculs
 */
class Vecteur
{
    private:
        float x, y;
    public:
        /*!
         *  \brief Constructeur
         *
         *  Constructeur vide de la classe Vecteur
         *
         */
        Vecteur();
        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Vecteur
         *
         *  \param float : x
         *  \param float : y
         */
        Vecteur(float, float);
        /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe Vecteur
         *
         */
        ~Vecteur();

        /*!
         *  \brief initialise un vecteur
         *
         *  Procédure qui créer un vecteur
         *
         *  \param float : valeur sur x
         *  \param float : valeur sur y
         * 
         */
        void init(float, float);

        /*!
         *  \brief Accesseur de x
         *
         *  Methode qui permet d'accéder en lecture au membre x de la platform
         *
         *  \return retourne x
         * 
         */
        float X();

        /*!
         *  \brief Accesseur de y
         *
         *  Methode qui permet d'accéder en lecture au membre y de la platform
         *
         *  \return retourne y
         * 
         */
        float Y();

        /*!
         *  \brief operateur +
         *
         *  Methode qui additionne deux vecteur
         *
         *  \param Vecteur : Vecteur de droite
         *
         *  \return la somme des deux vecteurs
         * 
         */ 
        Vecteur operator+(Vecteur);

        /*!
         *  \brief operateur =
         *
         *  Methode qui assigne la valeur du vecteur de droite au vecteur de gauche
         *
         *  \param Vecteur : Vecteur de droite
         *
         *  \return le vecteur de gauche (empilation)
         * 
         */ 
        Vecteur operator=(Vecteur);

        /*!
         *  \brief operateur *
         *
         *  Methode qui multiplie deux vecteur
         *
         *  \param Vecteur : Vecteur de droite
         *
         *  \return le produit des deux vecteurs
         * 
         */ 
        Vecteur operator*(float);
        
        friend ostream& operator<<(ostream&, Vecteur&);
};
#endif