#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>
#include <string.h>


using namespace std;

class Punto{

    private:
        std::string NombreP;
        int x;
        int y;
    public:
        Punto();
        void setNombreP(std::string);
        std::string getNombreP();
        void setX(int);
        int getX();
        void setY(int);
        int getY();
        void toStringP();

};

#endif
