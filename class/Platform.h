#ifndef PLATFORM_H
#define PLATFORM_H
using namespace std;

class Platform
{
    private:
        sf::Sprite * sprite;
        int height;
        int width;
        int x;
        int y;
    public:
        int n;
        Platform(int, int, int, int);
        Platform();
        void init(int, int, int, int);
        ~Platform();
        sf::Sprite Sprite(int);
        int Y();        
        int X();
        int Width();
        int Height();

};
#endif