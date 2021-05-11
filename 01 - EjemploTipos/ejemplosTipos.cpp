#include <cassert>
#include <string>

using namespace std;

int main()
{
        //Booleanos
    assert(true == true);
    assert(true != false);
    assert(true || false == true);
    assert(true && false == false);
    
        //unsigned int
    assert(1u == 1u);
    assert(4u / 2u == 2u);
    assert(1u * 1u == 1u);
    assert(1u + 1u == 2u);
    assert(2u - 1u == 1u);

        //char
    assert('h'=='h');
    assert('!' != '@');

        //double
    assert(1.5 - 0.5 == 1.0);
    assert(1.5 + 0.5 == 2.0);
    assert(0e-1 == 0e-1);
    assert(0e-1 != 1.0);
    assert(6.0 > 0e-1);
    assert(0e-1 < 6.0);

        //strings
    assert(string("hello") == "hello");
    assert(string("hello") != "hola");
    assert(string("hello") + string(" world!") == "hello world!");
    assert(string("AyED").length() >= 4);
return 0;
}