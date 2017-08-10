/*!
 * \file Camera.h
 * \brief Prorotype de la classe Camera
 * \author Omer
 * \date 9 août 2017
 */
#ifndef CAMERA_H
#define CAMERA_H

/*! \class Camera
 * \brief Camera de l'objet
 *
 *  La classe centre une camera sur l'objet
 */
class Camera
{
    private:
        sf::View camera;
    public:

        /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe Camera
         *
         */
        Camera();
        /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe Camera
         *
         */
        ~Camera();

        /*!
         *  \brief Centre la camera
         *
         *  Methode qui positionne la camera par rapport au centre de l'objet
         *
         *  \param int : x
         *  \param int : y
         *
         *  \return retourne camera
         * 
         */
        sf::View updateCamera(int, int);
};
#endif