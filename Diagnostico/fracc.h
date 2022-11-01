#include <iostream>
using namespace std;

class fraccion{

    private:
        int a = a/4;
        int b = b/4;
        int c = c/4;
        int d = d/4;
    public:

        fraccion (int, int ,int ,int);
        void multiplicacion();
        void suma();
};

fraccion::fraccion(int _a, int _b, int _c, int _d){
    a = _a;
    b = _b;
    c = _c;
    d = _b;
}

void fraccion::multiplicacion(){
    int rmn;
    int rmd; 
    int rfm;
    
    rmn = (a*c);  // resultado multiplicacion numerador
    rmd = (b*d); // resultado multiplicacion denominador
    rfm = rmn/rmd; // resultado final multiplicacion
    cout << "Tu multiplicacion es: " << rmn << "/" << rmd << endl;
    cout << "Y en enteros: " << rfm << endl;
}

void fraccion::suma(){
    int rsn;
    int rsd;
    int rfs;
    
    rsn = ((a*d)+(b*c)); //resultado suma numerador
    rsd = (b*d); //resultado suma denomidaor
    rfs = rsn/rsd; // resultado final suma
    cout << "Tu suma es: " << rsn << "/" << rsd << endl;
    cout << "Y en enteros: " << rfs << endl;
}