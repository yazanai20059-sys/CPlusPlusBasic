#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funció que filtra les paraules amb més de x caràcters
vector<string> filtrar_paraules(const vector<string>& paraules, int x) {
    vector<string> resultats;

    // Recorrem cada paraula de la llista
    for (const string& paraula : paraules) {
        // Comprovem si la longitud de la paraula és major que x
        if (paraula.length() > x) {
            resultats.push_back(paraula);  // Afegim la paraula a la llista de resultats
        }
    }

    return resultats;  // Retornem la llista filtrada
}

int main() {
    int n, x;

    // Demanem al usuari el nombre de paraules
    cout << "Quantes paraules vols introduir? ";
    cin >> n;

    vector<string> paraules(n);

    // Demanem a l'usuari que introdueixi les paraules
    cout << "Introdueix " << n << " paraules:" << endl;
    cin.ignore();  // Per ignorar el caràcter '\n' deixat pel cin anterior
    for (int i = 0; i < n; i++) {
        getline(cin, paraules[i]);
    }

    // Demanem a l'usuari el número x (llargada mínima)
    cout << "Quants caràcters mínims ha de tenir cada paraula? ";
    cin >> x;

    // Cridem la funció per filtrar les paraules
    vector<string> resultats = filtrar_paraules(paraules, x);

    // Mostrem el resultat
    cout << "Les paraules amb més de " << x << " caràcters són:" << endl;
    for (const string& paraula : resultats) {
        cout << paraula << endl;
    }

    return 0;
}