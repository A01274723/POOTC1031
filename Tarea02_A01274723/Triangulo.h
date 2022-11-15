#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include <string.h>
#include "Figura.h"
using namespace std;

class Triangulo : public Figura{
    private:
        int xT;
        int yT;
    public:
        Triangulo();
        void setXT(int);
        int getXT();
        void setYT(int);
        int getYT();
        void toString();

};

#endif