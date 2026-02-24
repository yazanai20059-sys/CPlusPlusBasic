#include <iostream>

using namespace std;

// Funció que determina si un any és de traspàs
bool es_de_traspas(int any) {
    // Un any és de traspàs si és divisible per 4 i no per 100, o bé és divisible per 400
    if ((any % 4 == 0 && any % 100 != 0) || (any % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int any;

    // Demanem a l'usuari que introdueixi un any
    cout << "Introdueix un any: ";
    cin >> any;

    // Cridem la funció i mostrem el resultat
    if (es_de_traspas(any)) {
        cout << any << " és un any de traspàs." << endl;
    } else {
        cout << any << " no és un any de traspàs." << endl;
    }

    return 0;
}