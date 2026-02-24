#include <iostream>
#include <string>
#include <list>

using namespace std;

string paraula_mes_llarga(const list<string>& paraules) {
    string mes_llarga = "";

    // Recórrer la llista per trobar la paraula més llarga
    for (const string& paraula : paraules) {
        if (paraula.length() > mes_llarga.length()) {
            mes_llarga = paraula;
        }
    }

    return mes_llarga;
}

int main() {
    list<string> a = {"Hola", "Adios", "Buen dia"};

    // Accedir als elements de la llista utilitzant un iterador
    for (const string& paraula : a) {
        cout << paraula << endl;
    }

    // Trobar la paraula més llarga
    string mes_llarga = paraula_mes_llarga(a);
    cout << "La paraula més llarga és: " << mes_llarga << endl;

    return 0;
}