/*!
 * \file Grid.h
 * \brief Prorotype de la classe Grid
 * \author Omer
 * \date 9 août 2017
 */
#ifndef GRID_H
#define GRID_H

/*! \class Grid
 * \brief Stocke la map
 *
 *  La classe stocke les murs de la map sous la formes d'une matrice d'incidence
 */
class Grid
{
    private:
        int c, l; 
        unsigned short int ** g;
    public:
        void set(int, int, int);
        Grid(int, int);
        ~Grid();
        int L();
        int C();
        int G(int, int);
};
#endif