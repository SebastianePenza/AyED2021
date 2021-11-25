#include <iostream>
using std::cout;
using std::cin;

#include <iomanip>
using std::setw;
using std::setfill;

#include <array>
using std::array;

#include <cmath>
#include <cassert>

unsigned const MAX_LENGHT = 50;
struct Punto
{
    double x,y;
};

struct Poligono
{
    unsigned n = 0;
    array <Punto, MAX_LENGHT> vertice {0};
};

Poligono addVertice(Poligono&, Punto, unsigned);
Punto getVertice(Poligono&, unsigned);
Poligono setVertice(Poligono&, Punto&, unsigned);
Poligono rmVertice(Poligono&, unsigned);
unsigned getCantidadLados(Poligono&);
double getPerimetro(Poligono&);
void build(Poligono&);

int main(){
    Poligono Poli;
    Punto p;
    build(Poli);
    
    unsigned n, opc = 0;

    do
    {
        cout<<  "\n[ 1 ] - Agregar un vertice.\n[ 2 ] - Consultar vertice dada una posicion.\n"
                "[ 3 ] - Modificar un vertice dada una posicion.\n[ 4 ] - Borrar un vertice.\n"
                "[ 5 ] - Consultar canitdad de lados del poligono.\n[ 6 ] - Consultar perimetro del poligono.\n"
                "[ 0 ] - Salir del programa.\n\n\tOpcion: ";
        cin >> opc;
    
        switch(opc)
        {
        case 0:
            break;

        case 1:
            cout<< "\nIngrese en que posicion quiere agregar un punto: ";
            cin >> n;
            cout<< "\tIngrese coordenada X del punto: ";
            cin >> p.x;
            cout<< "\tIngrese coordenada Y del punto: ";
            cin >> p.y;
            addVertice(Poli, p, n);
            break;
        
        case 2:
            cout<< "\nIngrese que posicion quiere consultar: ";
            cin >> n;
            getVertice(Poli, n);
            break;
        
        case 3:
            cout<< "\nIngrese de que posicion quiere modificar el punto: ";
            cin >> n;
            cout<< "\tIngrese nueva coordenada X: ";
            cin >> p.x;
            cout<< "\tIngrese nueva coordenada Y: ";
            cin >> p.y;
            setVertice(Poli, p, n);
            break;

        case 4:
            cout<< "\nIngrese de que posicion quiere borrar su punto: ";
            cin >> n;
            rmVertice(Poli, n);
            break;

        case 5:
            getCantidadLados(Poli);
            break;

        case 6:
            getPerimetro(Poli);
            break;
        }
    }
    while(opc != 0);

return 0;
}
 
void build(Poligono& Poligono){
    cout<< "Indique de cuantos lados quiere su Poligono: ";
    cin >> Poligono.n;

    for(int i=1 ; i<=Poligono.n ; i++){
        cout<< "\nIngrese las coordenadas del punto: "
            << i << "\n";
        cout<<"\tX = ";
        cin >> Poligono.vertice.at(i).x;
        cout<<"\tY = ";
        cin >> Poligono.vertice.at(i).y;
    }

}

Poligono addVertice(Poligono& Poligono, Punto addP, unsigned addI){
    for (unsigned i=Poligono.n+1 ; i>addI ; i--){    //Desplazamiento para el nuevo punto.
        Poligono.vertice.at(i).x = Poligono.vertice.at(i-1).x;
        Poligono.vertice.at(i).y = Poligono.vertice.at(i-1).y;
    }

    Poligono.vertice.at(addI).x = addP.x;   //Agrego el nuevo punto.
    Poligono.vertice.at(addI).y = addP.y;

    Poligono.n ++;  //Actualizo cantidad de lados.

return Poligono;
}

Punto getVertice(Poligono& Poligono, unsigned getI){
    cout<< "El vertice es: (" << Poligono.vertice.at(getI).x << ";" << Poligono.vertice.at(getI).y << ")\n";
}

Poligono setVertice(Poligono& Poligono, Punto& setP, unsigned setI){
    Poligono.vertice.at(setI).x = setP.x;   //Reemplazo las coordenadas por el punto dado.
    Poligono.vertice.at(setI).y = setP.y;
return Poligono;
}

Poligono rmVertice(Poligono& Poligono, unsigned rmI){
    

    for(unsigned i = rmI ; i<Poligono.n ; i++){ //Guardo el valor de los siguientes vertices.
        Poligono.vertice.at(i).x = Poligono.vertice.at(i+1).x;
        Poligono.vertice.at(i).y = Poligono.vertice.at(i+1).y;
    }

    Poligono.vertice.at(Poligono.n).x = 0; //Blanqueo el ultimo vertice
    Poligono.vertice.at(Poligono.n).y = 0;
    
    Poligono.n --;  //Actualizo cantidad de lados del poligono.

return Poligono;
}

unsigned getCantidadLados(Poligono& Poligono){
    cout<< "El poligono tiene: " << Poligono.n << " lados.\n";
}

double getPerimetro(Poligono& Poligono){
    double res = 0;

    for(unsigned i=1 ; i<Poligono.n ; i++){
        double d = sqrt(pow((Poligono.vertice.at(i+1).x - Poligono.vertice.at(i).x), 2) + pow((Poligono.vertice.at(i+1).y - Poligono.vertice.at(i).y), 2));
        res += d;
    }
    double d = sqrt(pow((Poligono.vertice.at(Poligono.n).x - Poligono.vertice.at(1).x), 2) + pow((Poligono.vertice.at(Poligono.n).y - Poligono.vertice.at(1).y), 2));
    res += d;
    cout<< "\nEl perimetro del poligono es: " << res << "\n";
return res;
}

