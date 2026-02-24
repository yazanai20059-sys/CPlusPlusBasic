#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funció que compta quants noms comencen amb la lletra 'a' o 'A'
int nums_que_comencen_per(const vector<string>& noms) {
    int comptador = 0;
    for (const string& nom : noms) {
        // Comprovem si el primer caràcter és 'a' o 'A'
        if (nom[0] == 'a' || nom[0] == 'A') {
            comptador++;
        }
    }
    return comptador;
}

int main() {
    int n;
    
    // Demanem a l'usuari la mida de la llista de noms
    cout << "Quants noms vols introduir? ";
    cin >> n;
    
    vector<string> noms(n);
    
    // Demanem a l'usuari que introdueixi els noms
    cout << "Introdueix " << n << " noms:" << endl;
    cin.ignore();  // Per ignorar el caràcter '\n' deixat pel cin anterior
    for (int i = 0; i < n; i++) {
        getline(cin, noms[i]);
    }

    // Cridem la funció i mostrem el resultat
    int resultat = nums_que_comencen_per(noms);
    cout << "Hi ha " << resultat << " noms que comencen per 'a' o 'A'." << endl;

    return 0;
}