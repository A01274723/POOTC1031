#include <iostream>

using namespace std;

class Figura {
#ifndef FIGURA_H
#define FIGURA_H

private:
	string nombre;
	string color;
public:
	Figura();
	Figura(string, string);
	void setNombre(string);
	string getNombre();
	void setColor(string);
	string getColor();
	string toString();
    virtual double perimetro()=0;
    virtual double area()=0;
    friend ostream& operator<<(ostream&, Figura&);
};

#endif