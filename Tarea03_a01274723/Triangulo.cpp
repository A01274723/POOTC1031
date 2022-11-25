#include "Triangulo.h"
#include <cmath>

Triangulo::Triangulo() : Figura{}, vertices{Punto{"A", 0.0, 0.0}, Punto{"B", 1.0, 1.0}, Punto{"C", 2.0, 2.0}} {}

Triangulo::Triangulo(string nom, string col, vector<Punto> puntos) : Figura{nom, col}, vertices{puntos} {}

vector<Punto> Triangulo::getVertices() {
	return vertices;
}

void Triangulo::setVertices(vector<Punto> puntos) {
	vertices = puntos;
}
string Triangulo::toString() {
	string puntos_str = "";
	for(Punto p:vertices)
		puntos_str += p.toString();
	return Figura::toString() + puntos_str;
}

double Triangulo::perimetro() {
  double d01{}; 
  double d12{};
  double d20{};
  d01 = vertices[0].distancia(vertices[1]);
  d12 = vertices[1].distancia(vertices[2]);
  d20 = vertices[2].distancia(vertices[3]);
  double peri{};
  peri = d01 + d12 + d20;
  return peri;
}

double Triangulo::area() {
  double s{};
  s = ( (vertices[0].distancia(vertices[1])) + (vertices[1].distancia(vertices[2])) + (vertices[2].distancia(vertices[3])) ) / 2;
  double a{};
  a = sqrt(s*(s-(vertices[0].distancia(vertices[1])))*(s-(vertices[1].distancia(vertices[2])))*(vertices[2].distancia(vertices[3])));
  return a;
}

double Triangulo::operator+(Triangulo& t3) {
    double sumaAr{};
    sumaAr = area() + t3.area(); 
    return sumaAr;
}

ostream& operator<<(ostream& os, Triangulo& t) {
  string puntos_str = "";
	for(Punto p:t.vertices)
		puntos_str += p.toString();
	os << t.getNombre() << " (" << t.getColor() << ") " << puntos_str;
  return os;
  }