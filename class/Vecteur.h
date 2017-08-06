class Vecteur
{
    private:
        float x, y;
    public:
        Vecteur();
        Vecteur(float, float);
        void init(float, float);
        ~Vecteur();
        float X();
        float Y();
        Vecteur operator+(Vecteur);
        Vecteur operator=(Vecteur);
        Vecteur operator*(float);
        friend ostream& operator<<(ostream&, Vecteur&);
};