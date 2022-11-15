#include <iostream>
#include <string.h>
#include "Punto.h" 

using namespace std;

Punto::Punto(){

}

void Punto::setNombreP(std::string _NombreP){
    NombreP = _NombreP;
}

std::string Punto::getNombreP(){
    return NombreP;
}

void Punto::setX(int _x){
    x = _x;
}

int Punto::getX(){
    return x;
}

void Punto::setY(int _y){
    y = _y;
}

int Punto::getY(){
    return y;
}

void Punto::toStringP(){
    cout << "El nombre de tu figura es: " << NombreP << endl;
    cout << "Tu punto en x es: " << getX() << endl;
    cout << "Tu punto en y es: " << getY() << endl;
}
