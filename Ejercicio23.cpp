#include <iostream>
#include <string>
#include <cmath>  // Per utilitzar la funció pow() si cal

using namespace std;

// Funció per convertir un número binari en enter
int binari_a_enter(const string& binari) {
    int resultat = 0;
    int mida = binari.length();
    
    // Recórrer cada caràcter del número binari
    for (int i = 0; i < mida; i++) {
        // Si el caràcter és '1', afegim la potència de 2 corresponent
        if (binari[i] == '1') {
            resultat += pow(2, mida - 1 - i);  // Potència de 2
        }
    }
    
    return resultat;
}

int main() {
    string binari;
    
    // Demanar al usuari el número binari
    cout << "Introdueix un número binari: ";
    cin >> binari;
    
    // Comprovar si la cadena és vàlida
    bool valid = true;
    for (char c : binari) {
        if (c != '0' && c != '1') {
            valid = false;
            break;
        }
    }
    
    // Si és vàlid, convertir-lo
    if (valid) {
        int resultat = binari_a_enter(binari);
        cout << "El número enter és: " << resultat << endl;
    } else {
        cout << "Número binari invàlid!" << endl;
    }
    
    return 0;
}