#ifndef Personnage_H
#define Personnage_H
class Personnage
{
    private:
        int x, y;
        Animation form;
        Physique physique;
    public:
        Personnage(int, int, string);
        ~Personnage();
        friend ostream& operator<<(ostream&, Personnage&);
        sf::Sprite Form();
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