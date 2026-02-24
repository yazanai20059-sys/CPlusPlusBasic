#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funció que compta quants noms comencen amb una lletra donada
int nums_que_comencen_per(const vector<string>& noms, char lletra) {
    int comptador = 0;
    for (const string& nom : noms) {
        // Comprovem si el primer caràcter és la lletra introduïda per l'usuari
        if (nom[0] == lletra || nom[0] == toupper(lletra)) {  // Permet també la majúscula
            comptador++;
        }
    }
    return comptador;
}

int main() {
    int n;
    char lletra;
    
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

    // Demanem a l'usuari quina lletra vol utilitzar per comprovar
    cout << "Quina lletra vols utilitzar per comprovar els noms (minúscula o majúscula)? ";
    cin >> lletra;

    // Cridem la funció i mostrem el resultat
    int resultat = nums_que_comencen_per(noms, lletra);
    cout << "Hi ha " << resultat << " noms que comencen per la lletra '" << lletra << "'." << endl;

    return 0;
}