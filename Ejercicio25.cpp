#include <iostream>
#include <vector>

using namespace std;

// Funció que mostra els valors majors que un número donat
void mostrar_majors_que(const vector<int>& tupla, int lim) {
    cout << "Els números majors a " << lim << " són: ";
    bool trobat = false;
    for (int num : tupla) {
        if (num > lim) {
            cout << num << " ";
            trobat = true;
        }
    }
    if (!trobat) {
        cout << "No s'ha trobat cap número major a " << lim << ".";
    }
    cout << endl;
}

int main() {
    int n, limit = 18;

    // Demanem a l'usuari la mida de la tupla (vector)
    cout << "Quants números vols introduir a la tupla? ";
    cin >> n;

    vector<int> tupla(n);

    // Demanem a l'usuari que introdueixi els números
    cout << "Introdueix " << n << " números enters:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tupla[i];
    }

    // Cridem la funció per mostrar els números majors a 18
    mostrar_majors_que(tupla, limit);

    return 0;
}