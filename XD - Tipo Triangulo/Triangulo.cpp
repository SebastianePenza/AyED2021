#include <iostream>
using std::cout;
using std::cin;

#include <cmath>

enum struct xLado {Equilátero, Escaleno, Isósceles};
enum struct xAng {Rectángulo, Obtusángulo, Acutángulo, Equiángulo};

struct Triangulo
{
    double l1,l2,l3;
};

void build(Triangulo);
double getPerimetro(double,double,double);
double getArea(double, double);
double getCentro(double);

Triangulo ABC;

int main(){
    build(ABC);
    double per = getPerimetro(ABC.l1 , ABC.l2 , ABC.l3);

return 0;
}

void build(Triangulo){
    cout<< "Bienvenido al programa!\n"
        << "Indique valor del lado 1: ";
    cin >> ABC.l1;
    cout<< "Indique valor del lado base: ";
    cin >> ABC.l2;
    cout<< "Indique valor del lado 3: ";
    cin >> ABC.l3;
}

double getPerimetro(double d, double f, double g){
    double res = d+f+g;
return res;
}

/*double getArea(double i, double j){
    double med = ();
    double res = i*(hypot()/2);
return res;
}*/

