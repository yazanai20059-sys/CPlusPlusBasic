#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> elevar_a_potencia(int pot, int n) {
    vector<int> llista;
    for (int i = 0; i <= n; i++) {
        llista.push_back(pow(i, pot));
    }
    return llista;
}

int main() {
    int pot = 2;
    int n = 10;

    vector<int> llista = elevar_a_potencia(pot, n);

    cout << "Números elevats a la potència " << pot << ": ";
    for (int i = 0; i < llista.size(); i++) {
        cout << llista[i] << " ";
    }
    cout << endl;

    return 0;
}