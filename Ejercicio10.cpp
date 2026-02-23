#include <iostream>
#include <string>

using namespace std;

int main() {
    string c;
    cout << "Escribe una cadena: ";
    getline(cin, c);
    cout << "La longitud de la cadena es: " << c.size() << endl;
}