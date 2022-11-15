#include <iostream>
#include <string.h>
#include "Triangulo.h"
#include "Figura.h"

using namespace std;

Triangulo::Triangulo(){

}

void Triangulo::setXT(int _xT){
    xT = _xT;
}

int Triangulo::getXT(){
    return xT;
}

void Triangulo::setYT(int _yT){
    yT = _yT;
}

int Triangulo::getYT(){
    return yT;
}

void Triangulo::toString(){
    cout << "El nombre de tu figura es: " << getNombre() << endl;
    cout << "El color de tu figura es: " << getColor() << endl;
    cout << "Tu punto en x es: " << xT << endl;
    cout << "Tu punto en y es: " << yT << endl;
}
