#include <iostream>
#include <string>
#include <cctype>  // Per utilitzar la funció tolower()

using namespace std;

// Funció per comptar les vocals en una paraula
void comptar_vocals(const string& paraula) {
    // Inicialitzem el comptador per cada vocal
    int compta_a = 0, compta_e = 0, compta_i = 0, compta_o = 0, compta_u = 0;

    // Recorrem cada lletra de la paraula
    for (char lletra : paraula) {
        lletra = tolower(lletra);  // Convertim a minúscula per simplificar la comparació
        // Comptem les vocals
        if (lletra == 'a') {
            compta_a++;
        } else if (lletra == 'e') {
            compta_e++;
        } else if (lletra == 'i') {
            compta_i++;
        } else if (lletra == 'o') {
            compta_o++;
        } else if (lletra == 'u') {
            compta_u++;
        }
    }

    // Mostrem el resultat
    cout << "Hi ha " << compta_a << " a’s, " 
         << compta_e << " e’s, " 
         << compta_i << " i’s, " 
         << compta_o << " o’s i " 
         << compta_u << " u’s." << endl;
}

int main() {
    string paraula;
    
    // Demanem la paraula a l'usuari
    cout << "Introdueix una paraula: ";
    cin >> paraula;

    // Cridem la funció per comptar les vocals
    comptar_vocals(paraula);

    return 0;
}