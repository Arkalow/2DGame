#ifndef GRID_H
#define GRID_H
using namespace std;

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