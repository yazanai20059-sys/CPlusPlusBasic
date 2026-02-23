#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    string cadena;
    cout << "Escribe una cadena: ";
    getline(cin, cadena);

    cout << "La longitud de la cadena es: " << cadena.length() << endl;
}