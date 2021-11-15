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
int getType(int);
double getPerimetro(double,double,double);
double getArea(double);
double getCentro(double);
double getHeight(int, double);

Triangulo ABC;
int opt = 0;

int main(){
    
    getType(opt);
    build(ABC);
    double per = getPerimetro(ABC.l1 , ABC.l2 , ABC.l3);
    double area = getArea(ABC.l2);

return 0;
}

void build(Triangulo){
    cout<< "Indique valor del lado 1: ";
    cin >> ABC.l1;
    cout<< "Indique valor del lado base: ";
    cin >> ABC.l2;
    cout<< "Indique valor del lado 3: ";
    cin >> ABC.l3;
}

int getType(int a){     //Resta trabajarlo accediendo a xLado
    cout<< "Bienvenido al programa!\n"
        << "Indique el tipo de triangulo que quiere construir: \n"
        << "\t [ 0 ] = Equilátero\n" 
        << "\t [ 1 ] = Escaleno\n" 
        << "\t [ 2 ] = Isósceles\n";
    cin>> opt;
return opt;
}

double getPerimetro(double d, double f, double g){
    double res = d+f+g;
return res;
}

double getArea(double i){
    double h = getHeight(opt, ABC.l2);
    double res = (i*h)/2;
return res;
}

double getHeight(int k, double l){  //Resta el caso de un escaleno
    double lMenor,h;
    if(k == 0 || 2)
        lMenor = l/2;
        h = sqrt(pow(ABC.l1, 2) - pow(lMenor, 2));
    else

return h;
}
