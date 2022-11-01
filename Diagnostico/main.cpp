//Jesus Ramirez Delgado
//Diagonostico
//POO

#include <iostream>
#include "fracc.h"
using namespace std;



int main (){

    fraccion X (16, 8 , 32, 64);

    cout << "Este programa ralizar una suma y multiplicacion de fracciones" << endl;
    cout << "Las fracciones son: " << endl;
    cout << "16" << "   " << "32" << endl;
    cout << "--" << " y " << "--" << endl;
    cout << " 8" << "   " << "64" << endl;

    X.multiplicacion();
    X.suma();

    return 0;
}