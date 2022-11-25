#include "Punto.h"
#include <cmath>

Punto::Punto() : nombre{"P"}, x{10.0}, y{20.0} {}

Punto::Punto(string nom, double x1, double y1) : nombre{nom}, x{x1}, y{y1} {}

void Punto::setX(double x1) {
	x = x1;
}
double Punto::getX() {
	return x;
}
void Punto::setY(double y1) {
	y = y1;
}
double Punto::getY() {
	return y;
}
void Punto::setNombre(string nom) {
	nombre = nom;
}
string Punto::getNombre() {
	return nombre;
}

string Punto::toString() {
	return nombre + "(" + to_string(x) + "," + to_string(y) + ") ";
}

double Punto::distancia(const Punto& p2) {
  double dist{};
  dist = sqrt(pow((x-p2.x),2)+pow((y-p2.y),2));
  return dist;
}

ostream& operator<<(ostream& os, Punto& p) {
  os << p.nombre << "(" << p.x << "," << p.y << ") ";
  return os;
}