#include <iostream>
#include <vector>
using namespace std;

int comptar_coincidencies(const vector<int>& llista) {
    int comptador = 0;
    for (int i = 0; i < llista.size(); i++) {
        if (llista[i] == i) {
            comptador++;
        }
    }
    return comptador;
}

int main() {
    vector<int> llista = {0, 2, 3, 3, 4};
    int resultat = comptar_coincidencies(llista);

    cout << "Número d'elements on coincideix el valor amb l'índex: " << resultat << endl;

    return 0;
}