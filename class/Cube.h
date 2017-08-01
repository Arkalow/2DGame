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
        float g;
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
};