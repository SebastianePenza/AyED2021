#include <iostream>
using std::cout;
using std::cin;

#include <cassert>

int val, x;

int f3(int);
void printRes(), getValue();

int main(){
    getValue();
    x = f3(val);
    printRes();
return 0;
}

void getValue(){
    cout<< "\nBienvenido al programa!\n"
        << "Ingrese un valor: \n";
    cin>> val;
}

int f3(int a){
    int b = 0;
    a < -3 || a > 3 ? b = 0 :
    b = 1;

#ifndef NDEBUG
{

}
#endif

return b;
}

void printRes(){
    if(x==0)
        cout<< "Usted se encuentra en el tramo (-inf ; -3) U (3 ; +inf) de la F3.";
    else
        cout<< "Usted se encuentra en el tramo [-3 ; 3] de la F3.";
}