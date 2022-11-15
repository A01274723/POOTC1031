//
// Jesus Ramirez Delgado
// A01274723
// Actividad 2 Herencia
//

#include <iostream>
#include <string.h>
#include "Figura.h"
#include "Punto.h"
#include "Triangulo.h"

using namespace std;

int main(){

    Triangulo *figuras[3];
    
    figuras [0] = new Triangulo();
    figuras [1] = new Triangulo();
    figuras [2] = new Triangulo();


    figuras[0] -> setNombre("T0");
    figuras[0] -> setColor("Rojo");
    figuras[0] -> setXT(10);
    figuras[0] -> setYT(10);
    figuras[0] -> toString();

    cout << endl;

    figuras[1] -> setNombre("T1");
    figuras[1] -> setColor("Azul");
    figuras[1] -> setXT(12);
    figuras[1] -> setYT(31);
    figuras[1] -> toString();

    cout << endl;

    figuras[2] -> setNombre("T2");
    figuras[2] -> setColor("Verde");
    figuras[2] -> setXT(10);
    figuras[2] -> setYT(5);
    figuras[2] -> toString();

    return 0;
}