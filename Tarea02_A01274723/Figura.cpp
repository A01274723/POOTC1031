#include <iostream>
#include <string.h>
#include "Figura.h"

using namespace std;

Figura::Figura(){

}

void Figura::setNombre(std::string _Nombre){
    Nombre = _Nombre;
}

std::string Figura::getNombre(){
    return Nombre;
}

void Figura::setColor(std::string _Color){
    Color = _Color;
}

std::string Figura::getColor(){
    return Color;
}

void Figura::toString(){
    cout << "El Nombre de tu figura es: " << getNombre() << endl;
    cout << "El color de tu figura es: " << getColor() << endl;
}


