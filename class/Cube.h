#ifndef CUBE_H
#define CUBE_H
class Cube
{
    private:
        int x, y;
        sf::RectangleShape form;
        float angle;
        float amplitude;
        float vitesse;
        int t;
        int t0;
        int x0;
        int y0;
        float f;
    public:
        Cube(int, int);
        Cube();
        ~Cube();
        friend ostream& operator<<(ostream&, Cube&);
        sf::RectangleShape Form();
        void update();
        void Up();
        void Left();
        void Right();
        void Down();
        int X();
        int Y();
        void fall();
};
#endif