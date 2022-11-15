#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
#include <string.h>


using namespace std;

class Figura{

    private:
        std::string Nombre;
        std::string Color;
    public:
        Figura();
        void setNombre(std::string);
        std::string getNombre();
        void setColor(std::string);
        std::string getColor();
        virtual void toString();
};

#endif