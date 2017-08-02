using namespace std;

class Level
{
    private:
        int nbPlatform;
        sf::Texture backgroundTexture;
        sf::Sprite background;
        Grid * map;
    public:
        Platform * platform;
        Level();
        ~Level();
        int NbPlatform(); 
        sf::Sprite Background();
        void updateBackground(int, int);    
        int operator()(int, int); 
        void init();
        bool test(int, int);
};