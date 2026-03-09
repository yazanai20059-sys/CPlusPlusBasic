#include <iostream>
#include <vector>
#include <string>
using namespace std;

int index_paraula(const vector<string>& llista, const string& paraula) {
    for (int i = 0; i < llista.size(); i++) {
        if (llista[i] == paraula) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<string> llista = {"apple", "banana", "cherry", "date", "elderberry"};
    string paraula;

    cout << "Introdueix la paraula a buscar: ";
    cin >> paraula;

    int index = index_paraula(llista, paraula);

    if (index != -1) {
        cout << "La paraula es troba a l'índex: " << index << endl;
    } else {
        cout << "La paraula no es troba a la llista." << endl;
    }

    return 0;
}