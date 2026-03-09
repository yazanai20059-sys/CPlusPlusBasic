#include <iostream>
#include <vector>
using namespace std;

int Passar_a_Numero(const vector<int>& llista) {
    int numero = 0;
    for (int i = 0; i < llista.size(); i++) {
        numero = numero * 10 + llista[i];
    }
    return numero;
}

int main() {
    vector<int> llista = {3, 4, 1, 5};
    int resultat = Passar_a_Numero(llista);

    cout << "El número corresponent és: " << resultat << endl;

    return 0;
}