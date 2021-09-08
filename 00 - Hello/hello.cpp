#include <fstream>

using std::ofstream;

int main() 
{
    ofstream file;

    file.open("output.txt");
    file << "Hola Mundo!";
    file.close();

return 0;
}