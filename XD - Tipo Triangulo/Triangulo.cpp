#include <iostream>
using std::cout;
using std::cin;

#include <cmath>

enum struct xLado {Equilatero, Escaleno, Isosceles};
enum struct xAng {Rectangulo, Obtusangulo, Acutangulo, Equiangulo};

struct Triangulo
{
    double l1,l2,l3;
};

void build(int, Triangulo);
void getType();
double getPerimetro(double,double,double);
double getArea(double);
double getCentro(double);
double getHeight(int, double);

Triangulo ABC;
int opt;

int main(){

    getType();
    build(opt, ABC);
    double per = getPerimetro(ABC.l1 , ABC.l2 , ABC.l3);
    double area = getArea(ABC.l2);

    cout<< "El perimetro es: "
        << per
        << " y el area: "
        << area;
return 0;
}

void getType(){ 
    cout<< "Bienvenido al programa!\n"
        << "Indique el tipo de triangulo que quiere construir: \n"
        << "\t [ 0 ] = Equilatero\n" 
        << "\t [ 1 ] = Escaleno\n" 
        << "\t [ 2 ] = Isosceles\n";
    cin >> opt;
}

void build(int a, Triangulo){
    if(a == 0 || 2){
        cout<< "Indique valor del lado 1: ";
        cin >> ABC.l1;
        cout<< "Indique valor del lado base: ";
        cin >> ABC.l2;
        cout<< "Indique valor del lado 3: ";
        cin >> ABC.l3;
    }
    else{
        cout<< "Indique valor del lado Menor: ";
        cin >> ABC.l1;
        cout<< "Indique valor de la Hipotenusa: ";
        cin >> ABC.l2;
        cout<< "Indique valor del lado Mayor: ";
        cin >> ABC.l3;
    }
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

double getHeight(int k, double l){
    double lMenor,s,h;
    if(k == 0 || 2){
        lMenor = l/2;
        h = sqrt(pow(ABC.l1, 2) - pow(lMenor, 2));
    }
    else{
        s = (ABC.l1 + ABC.l2 + ABC.l3) / 2;
        h = (2/ABC.l2) * sqrt(s*(s - ABC.l1)*(s - ABC.l3)*(s - ABC.l2));
    }
return h;
}