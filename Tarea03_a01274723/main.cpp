#include <vector>
#include <iostream>
#include "Triangulo.h"

using namespace std;

int main() {
	
	Punto p0{};
	Punto p1{"P1", 9.1, 1.2};
	Punto p2{"P2", 5.5, 1.0};
	vector<Punto> puntos{p0, p1, p2};
	vector<Punto> puntos2(3, Punto{}); 
	vector<Punto> puntos3(3, Punto{"P", 100.0, 100.0}); 
	
	Triangulo t0{};
	Triangulo t1{"T1", "Rojo", puntos};
	Triangulo t2{"T2", "Amarillo", puntos2};
	Triangulo t3{"T3", "Negro", puntos3};
	
	cout << p0 << endl;
	cout << p1 << endl;
	cout << p2 << endl;

	cout << t0 << endl;
	cout << t1 << endl;
	cout << t2 << endl;
	cout << t3 << endl;	

  cout << "El perimetro de los triangulos es: " << endl;
  cout << "T2: " << to_string(t2.perimetro()) << " m" << endl;
  cout << "T3: " << to_string(t3.perimetro()) << " m" << endl;
  
  cout << "El área de los triangulos es: " << endl;
  cout << "T2: " << to_string(t2.area()) << " m^2" << endl;
  cout << "T3: " << to_string(t3.area()) << " m^2" << endl;

  cout << "La suma de las dos áreas es: " << t2 + t3 << " m^2" << endl;

  
}