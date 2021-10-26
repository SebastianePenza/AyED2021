#include <iostream>
using std::cout;
using std::cin;

#include <cassert>

int val, x = 0;
int abs(int);
void printRes(), getValue();

int main(){
    getValue();
    x = abs(val);
    printRes();
return 0;
}

void getValue(){
    cout<< "\nBienvenido al programa!\n"
        << "Ingrese valor a calcular: ";
    cin>> val;
}

int abs(int a){
    val > 0 ? a = val :
    val < 0 ? a = -val : 
    val = 0;

#ifndef NDEBUG
{

}
#endif

return a;
}

void printRes(){
    cout<< "El valor Absoluto de lo ingresado es: "
        << x;
}