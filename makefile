exe: Animation.o Button.o Camera.o Grid.o Level.o Menu.o Personnage.o Physique.o Platform.o Vecteur.o Weapon.o main.o
	g++ Animation.o Button.o Camera.o Grid.o Level.o Menu.o Personnage.o Physique.o Platform.o Vecteur.o Weapon.o main.o -o exe -lsfml-graphics -lsfml-window -lsfml-system -Wall

main.o: class/Weapon.h main.cpp import.h class/Animation.h class/Button.h class/Camera.h class/Grid.h class/Level.h class/Menu.h class/Personnage.h class/Physique.h class/Platform.h class/Vecteur.h class/Weapon.h
	g++ -c main.cpp -Wall 

Animation.o: class/Animation.cpp class/Animation.h import.h
	g++ -c class/Animation.cpp -Wall 

Button.o: class/Button.cpp class/Button.h import.h
	g++ -c class/Button.cpp -Wall 

Camera.o: class/Camera.cpp class/Camera.h import.h
	g++ -c class/Camera.cpp -Wall 

Grid.o: class/Grid.cpp class/Grid.h import.h
	g++ -c class/Grid.cpp -Wall 

Level.o: class/Weapon.h class/Level.cpp class/Level.h import.h class/Vecteur.h class/Physique.h class/Animation.h class/Camera.h class/Personnage.h class/Platform.h class/Grid.h
	g++ -c class/Level.cpp -Wall 

Platform.o: class/Platform.cpp class/Platform.h import.h
	g++ -c class/Platform.cpp -Wall 

Personnage.o: class/Weapon.h class/Personnage.cpp class/Personnage.h import.h
	g++ -c class/Personnage.cpp -Wall 

Physique.o: class/Physique.cpp class/Physique.h import.h class/Vecteur.h
	g++ -c class/Physique.cpp -Wall 

Menu.o: class/Menu.cpp class/Menu.h class/Button.h
	g++ -c class/Menu.cpp -Wall
	
Vecteur.o: class/Vecteur.cpp class/Vecteur.h import.h
	g++ -c class/Vecteur.cpp -Wall 

Weapon.o: class/Weapon.cpp class/Weapon.h import.h
	g++ -c class/Weapon.cpp -Wall 