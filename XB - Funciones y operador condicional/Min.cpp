#include <iostream>
using std::cout;
using std::cin;

#include <cassert>

int val1, val2, x = 0;
int min(int, int);
void printRes(), getValues();

int main(){
    getValues();
    x = min(val1, val2);
    printRes();
}

void getValues(){
    cout<< "\nBienvenido al programa!\n"
        << "Ingrese un valor: \n";
    cin>> val1;
    cout<< "Ingrese otro valor: \n";
    cin>> val2;
}

int min(int a, int b){
    int c;
    a < b ? c = a :
    b < a ? c = b :
    c = 'e';

#ifndef NDEBUG
{

}
#endif

return c;
}

void printRes(){
    if(x=='e')
        cout<< "Los valores son iguales. Vuelva a ingresar valores distintos entre si.";
    else
        cout<< "El valor minimo entre lo ingresado es: "
            << x;        
}