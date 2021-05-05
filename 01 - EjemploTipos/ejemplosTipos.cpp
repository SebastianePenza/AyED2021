#include <cassert>
#include <string>

using namespace std;

int main()
{
    bool switchOn = true;
    char carac = 'a';
    unsigned int notaMax = 10;
    unsigned int prom = 18;
    double planck = 6.62607015e-34;
    string txt = "Algoritmos y Estructuras de datos";

    assert(switchOn==true);
    assert(carac!='h');
    assert(prom/3 <= notaMax);
    assert(planck>=0);
    assert(txt.size()==34);

return 0;
}