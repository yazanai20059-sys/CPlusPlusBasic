#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> lenp(const string& frase) {
    vector<int> longituds;
    stringstream ss(frase);
    string paraula;

    while (ss >> paraula) {
        longituds.push_back(paraula.length());
    }

    return longituds;
}

int main() {
    string frase = "Hola, Bondia a tots";
    vector<int> resultat = lenp(frase);

    cout << "Longituds de les paraules: ";
    for (int i = 0; i < resultat.size(); i++) {
        cout << resultat[i] << " ";
    }
    cout << endl;

    return 0;
}