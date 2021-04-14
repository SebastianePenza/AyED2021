#include <fstream>

using namespace std;

int main() 
{
    ofstream file;

    file.open("output.txt");
    file << "Hola Mundo!";

    file.close();
    return 0;
}
