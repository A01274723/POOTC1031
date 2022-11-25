#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include <vector>
#include "Figura.h"
#include "Punto.h"

using namespace std;

class Triangulo : public Figura {
private:
	vector<Punto> vertices;
public:
	Triangulo();
	Triangulo(string, string, vector<Punto>);
	vector<Punto> getVertices();
	void setVertices(vector<Punto>);
	string toString();
    double perimetro() override;
    double area() override;
    double operator+(Triangulo&);
    friend ostream& operator<<(ostream&, Triangulo&);
};

#endif