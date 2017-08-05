class Force
{
    private:
        int x, x0, absoluteX;
        int y, y0, absoluteY;
        float t;
        int vitesse;
        int angle;
        float forceX, forceY;
    public:
        Force();
        Force(int, int, int, int, int);
        Force(int, int, int, float, float);
        ~Force();
        void update();
        int X();
        int Y();
        
        int X0();
        int Y0();
        int T();
        float ForceX();
        float ForceY();

};