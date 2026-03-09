#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

vector<string> crear_llista_fitxer(const string& nom_fitxer) {
    vector<string> llista;
    ifstream fitxer(nom_fitxer);
    
    if (!fitxer.is_open()) {
        cout << "No s'ha pogut obrir el fitxer." << endl;
        return llista;
    }

    string linia;
    while (getline(fitxer, linia)) {
        stringstream ss(linia);
        string paraula;
        while (ss >> paraula) {
            llista.push_back(paraula);
        }
    }
    
    fitxer.close();
    return llista;
}

int main() {
    string nom_fitxer = "exemple.txt";
    vector<string> llista = crear_llista_fitxer(nom_fitxer);

    cout << "Llista de paraules llegides del fitxer: ";
    for (const string& paraula : llista) {
        cout << paraula << " ";
    }
    cout << endl;

    return 0;
}