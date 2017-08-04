class Force
{
    private:
        int x, x0;
        int y, y0;
        float t;
        int vitesse;
        int angle;
        int forceX, forceY;
    public:
        Force();
        Force(int, int, float);
        ~Force();
        void update();
        int X();
        int Y();
}