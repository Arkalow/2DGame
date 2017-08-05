#include "../import.h"
#include "Force.h"
#include "Cube.h"
Cube::Cube(){
    
}
Cube::Cube(int x, int y){
    this->x = x;
    this->y = y;
    form.setSize(sf::Vector2f(32, 32));
    form.setFillColor(sf::Color::Red);
    form.setPosition(x, y);
    
    for(int i = 0; i < 5; i++){
        forces[i] = NULL;
    }
}
Cube::~Cube(){
    for(int i = 0; i < 5; i++){
        delete forces[i];
    }
}
ostream& operator<<(ostream &os, Cube &c)
{ 
    os << "x: " << c.x << "| y: " << c.y << "\n";
    return os;
}
sf::RectangleShape Cube::Form(){
    return form;
}
void Cube::update(){
    int tmpX = 0;
    int tmpY = 0;
    for(int i = 0; i < 5; i++){
        if(forces[i] != NULL){
            forces[i]->update();
            tmpX += forces[i]->X();
            tmpY += forces[i]->Y();
            cout << i << " => x: " << tmpX << "| y: " << tmpY << endl;
        }
    }
    
    x += tmpX;
    y += tmpY;
    // cout << "x: " << x << "| y: " << y<< endl;
    form.setPosition(x, y);
}
int Cube::X(){
    return x;
}
int Cube::Y(){
    return y;
}
void Cube::addForce(Force * force){
    for(int i = 0; i < 5; i++){
        if(forces[i] == NULL){
            forces[i] = force;
            return;
        }
    }
}
void Cube::removeForce(Force * force){
    for(int i = 0; i < 5; i++){
        if(forces[i] == force){
            forces[i] = NULL;
            return;
        }
    }
}