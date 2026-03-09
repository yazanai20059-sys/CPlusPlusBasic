#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void llegir_fitxer(const string& nom_fitxer) {
    ifstream fitxer(nom_fitxer);

    if (!fitxer) {
        cout << "Error: No s'ha pogut obrir el fitxer '" << nom_fitxer << "'." << endl;
        return;
    }

    string linia;
    while (getline(fitxer, linia)) {
        cout << linia << endl;
    }

    fitxer.close();
}

int main() {
    string nom_fitxer;
    
    cout << "Introdueix el nom del fitxer a llegir: ";
    cin >> nom_fitxer;
    
    llegir_fitxer(nom_fitxer);

    return 0;
}