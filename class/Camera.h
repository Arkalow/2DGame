class Camera
{
    private:
        sf::View camera;
    public:
        Camera();
        ~Camera();
        sf::View updateCamera(int, int);
};