#include <iostream>
#include "Figura.h"

Figura::Figura() : nombre{"Figura"}, color{"Blanco"} {}

Figura::Figura(string nom, string col) : nombre{nom}, color{col} {}

void Figura::setNombre(string nom) {
	nombre = nom;
}

string Figura::getNombre() {
	return nombre;
}

void Figura::setColor(string col) {
	color = col;
}

string Figura::getColor() {
	return color;
}

string Figura::toString() {
	return nombre + "(" + color + "): ";
  }

ostream& operator<<(ostream& os, Figura& f) {
  os << f.nombre << " (" << f.color; "): ";
  return os;
  }
