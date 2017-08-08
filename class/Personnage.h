#ifndef Personnage_H
#define Personnage_H
class Personnage
{
    private:
        int x, y;
        sf::RectangleShape form;
        Physique physique;
    public:
        Personnage(int, int);
        Personnage();
        ~Personnage();
        friend ostream& operator<<(ostream&, Personnage&);
        sf::RectangleShape Form();
        Vecteur update();
        int X();
        int Y();
        void addForce(Vecteur *);
        void removeForce(Vecteur *);
        void setVitesseX(float);
        void setVitesseY(float);
        Vecteur move(float, float);
        void Right(int);
        void Left(int);
};
#endif