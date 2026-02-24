#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Persona {
    string nom;
    int any_naixement;
    int edat;
};

// Funció per calcular l'edat de cada persona
void calcular_edad(int any_actual, vector<Persona>& persones) {
    for (auto& persona : persones) {
        persona.edat = any_actual - persona.any_naixement;
    }
}

int main() {
    int any_actual;

    // Demanem l'any actual
    cout << "Introdueix l'any actual: ";
    cin >> any_actual;

    vector<Persona> persones(4); // Inicialitzem el vector amb 4 persones

    // Demanem dades per a cada persona
    for (int i = 0; i < 4; ++i) {
        cout << "Introdueix el nom de la persona " << i+1 << ": ";
        cin >> persones[i].nom;
        cout << "Introdueix l'any de naixement de " << persones[i].nom << ": ";
        cin >> persones[i].any_naixement;
    }

    // Calcular l'edat de cada persona
    calcular_edad(any_actual, persones);

    // Imprimir la taula amb les dades
    cout << endl;
    cout << "Any actual: " << any_actual << endl;
    cout << left << setw(20) << "Nom" << setw(20) << "Data naixement" << "Anys que farà aquest any" << endl;

    for (const auto& persona : persones) {
        cout << left << setw(20) << persona.nom
             << setw(20) << persona.any_naixement
             << persona.edat << endl;
    }

    return 0;
}