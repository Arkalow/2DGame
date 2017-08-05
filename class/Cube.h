#ifndef CUBE_H
#define CUBE_H
class Cube
{
    private:
        int x, y;
        sf::RectangleShape form;
        Force * forces[5];
    public:
        Cube(int, int);
        Cube();
        ~Cube();
        friend ostream& operator<<(ostream&, Cube&);
        sf::RectangleShape Form();
        void update();
        int X();
        int Y();
        void addForce(Force *);
        void removeForce(Force *);
};
#endif