#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> concatena_llistes(const vector<string>& llista1, const vector<string>& llista2, const string& connector) {
    vector<string> resultat;
    int size = min(llista1.size(), llista2.size());
    
    for (int i = 0; i < size; i++) {
        resultat.push_back(llista1[i] + connector + llista2[i]);
    }

    return resultat;
}

int main() {
    vector<string> llista1 = {"sub", "supra"};
    vector<string> llista2 = {"campió", "campiona"};
    string connector = "-";

    vector<string> resultat = concatena_llistes(llista1, llista2, connector);

    cout << "Resultat de la concatenació: ";
    for (const string& paraula : resultat) {
        cout << "[" << paraula << "] ";
    }
    cout << endl;

    return 0;
}