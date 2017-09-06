#include "../import.h"
#include "Grid.h"
/**
* @desc Constructeur
*/
Grid::Grid(int c, int l){
    this->l = l;
    this->c = c;
    g = new unsigned short int *[c];
    for(int i = 0; i < c; i++){
        g[i] = new unsigned short int [l];
    }
}
/**
* @desc Destructeur
*/
Grid::~Grid(){
    for(int i = 0; i < c; i++){
        delete[] g[i];
    }
    delete[] g;
}
/**
* @desc Return c
*/
int Grid::C(){
    return c;
}
/**
* @desc Return l
*/
int Grid::L(){
    return l;
}
int Grid::G(int x, int y){
    return g[x][y];
}
void Grid::set(int x, int y, int value){
    g[x][y] = value;
}