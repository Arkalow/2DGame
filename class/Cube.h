#ifndef CUBE_H
#define CUBE_H
class Cube
{
    private:
        int x, y;
        sf::RectangleShape form;
        Physique physique;
    public:
        Cube(int, int);
        Cube();
        ~Cube();
        friend ostream& operator<<(ostream&, Cube&);
        sf::RectangleShape Form();
        void update();
        int X();
        int Y();
        void addForce(Vecteur *);
        void removeForce(Vecteur *);
        void setVitesseX(float);
        void setVitesseY(float);
};
#endif