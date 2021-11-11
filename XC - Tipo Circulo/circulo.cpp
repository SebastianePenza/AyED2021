#include <iostream>
using std::cout;
using std::cin;

#include <cmath>

#include <iomanip>
using std::setprecision;

#define M_PI       3.14159265358979323846

struct Punto {double x,y;};
struct Circulo
{
    Punto c;
    double rad;
};

double getCircunferencia(double);
double getArea(double);
bool isDentro(Punto);
void moverCirculo();

Circulo circulo;
Punto p;

int main(){   
    char opt;

    cout << "Ingrese coordenada X del centro del circulo: ";
    cin >> circulo.c.x;
    cout << "Ingrese coordenada Y del centro del circulo: ";
    cin >> circulo.c.y;
    cout << "Ingrese radio: ";
    cin >> circulo.rad;

    cout << "Confirma posicion del circulo? (Y/N): ";
    cin >> opt;
    
    if(opt == 'n')
        moverCirculo();

    double circ = getCircunferencia(circulo.rad);
    double area = getArea(circulo.rad);
    cout << "El centro del circulo se encuentra en: ("
         << circulo.c.x << ";" << circulo.c.y << ")\n";
    cout << "La Circunferencia del circulo es de: " << setprecision(5)
         << circ << "\n";
    cout << "El Area del circulo es de: " << setprecision(5)
         << area << "\n";

    cout << "Indique coordenada X, del punto a verificar: ";
    cin >> p.x;
    cout << "Indique coordenada Y, del punto a verificar: ";
    cin >> p.y;
    
    if(isDentro(p) == true)
        cout << "El Punto indicado pertenece al circulo.\n";
    else
        cout << "El Punto indicado no pertenece al circulo.\n";

return 0;
}

double getCircunferencia(double a){
    double res = 2*M_PI*a;
return res;
}

double getArea(double b){
    double res = M_PI * pow(b,2.0);
return res;
}

bool isDentro(Punto a){
    bool res;
    hypot(a.x - circulo.c.x , a.y - circulo.c.y) <= circulo.rad ?
    res = true : res = false;
return res;
}

void moverCirculo(){
    cout << "Reingrese coordenada X del centro del circulo: ";
    cin >> circulo.c.x;
    cout << "Reingrese coordenada Y del centro del circulo: ";
    cin >> circulo.c.y;
}