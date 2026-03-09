#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<char> crear_llista_lletres(const string& paraula) {
    vector<char> llista;
    for (char lletra : paraula) {
        llista.push_back(lletra);
    }
    return llista;
}

int main() {
    string paraula = "institut";
    vector<char> llista = crear_llista_lletres(paraula);

    cout << "Llista de lletres: [";
    for (int i = 0; i < llista.size(); i++) {
        cout << "'" << llista[i] << "'";
        if (i != llista.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}