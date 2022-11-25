#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>

using namespace std;

class Punto {
private:
	double x;
	double y;
	string nombre;
public:
	Punto();
	Punto(string, double, double);

	void setX(double);
	double getX();
	void setY(double);
	double getY();
	void setNombre(string);
	string getNombre();
	string toString();
    double distancia(const Punto&);
    friend ostream& operator<<(ostream&, Punto&);
};

#endif