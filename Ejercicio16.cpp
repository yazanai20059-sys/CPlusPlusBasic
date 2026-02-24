#include <iostream>
#include <string>

using namespace std;

string crear_repetits(int num, char car) {
    string resultat = "";
    for (int i = 0; i < num; i++) {
        resultat += car;  // Afegim el caràcter a la cadena
    }
    return resultat;
}

int main() {
    int num;
    char car;

    cout << "Introdueix un número enter: ";
    cin >> num;
    cout << "Introdueix un caràcter: ";
    cin >> car;

    string resultat = crear_repetits(num, car);
    cout << "El resultat és: " << resultat << endl;

    return 0;
}