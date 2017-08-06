class Physique
{
    private:
        Vecteur * vecteurs[5];
        Vecteur acceleration;
        Vecteur vitesse;
    public:
        Physique();
        ~Physique();
        void add(Vecteur *);
        void remove(Vecteur *);
        Vecteur update();
        void setVitesseX(float);
        void setVitesseY(float);
};