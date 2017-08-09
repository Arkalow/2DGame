class Animation
{
    private:
        //Animation
        bool updateFps;
        int fpsCount;
        int fpsSpeed;
        int switchFps;
        sf::Clock time;
        sf::Vector2i * anim;

        //texture
        sf::Sprite sprite;
        sf::Texture img;
    public:
        Animation(string);
        ~Animation();
        void playAnimation(int);
        sf::Sprite Sprite();
        void setPosition(int, int);
};