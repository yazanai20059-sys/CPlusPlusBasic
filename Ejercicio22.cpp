#include <iostream>
#include <string>
#include <cctype>  // Per a la funció isupper()

using namespace std;

// Funció per comptar les lletres majúscules en una cadena
int comptar_majuscules(const string& cadena) {
    int comptador = 0;
    
    // Recórrer cada caràcter de la cadena
    for (char c : cadena) {
        if (isupper(c)) {  // Si el caràcter és una lletra majúscula
            comptador++;
        }
    }
    
    return comptador;
}

int main() {
    // Proves amb diferents exemples
    string exemple1 = "Hola Mundo";
    string exemple2 = "ESTIC AQUI!";
    string exemple3 = "escriuretotenminúscules";
    
    cout << "Exemple 1: '" << exemple1 << "' té " << comptar_majuscules(exemple1) << " majúscules." << endl;
    cout << "Exemple 2: '" << exemple2 << "' té " << comptar_majuscules(exemple2) << " majúscules." << endl;
    cout << "Exemple 3: '" << exemple3 << "' té " << comptar_majuscules(exemple3) << " majúscules." << endl;

    return 0;
}