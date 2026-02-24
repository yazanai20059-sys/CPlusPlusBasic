#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

// Funció on expliquem què passa
void intro() {
    cout << "En una època on els gegants governen Menorca. Nosaltres necessitem menjar,\n"
        	"Estem seguint el rastre de l'olor del menjar, però ens trobem en una cruïa.\n"
        	"Al final de cada camí hi ha un talaiot, en un viuen els gegants bons que ens convidaran\n"
        	"i en l'altre són uns caníbals afamats, i ens menjaran just ens vegin.\n";
}

// Funció on demanem a quin talaiot volem anar
string canviTalaiot() {
    string talaiot;
    while (talaiot != "1" && talaiot != "2") {
        cout << "A quin Talaiot vols anar? Introdueixi 1 o 2: ";
        cin >> talaiot;
    }
    return talaiot;
}

// Funció que ens indica si compartiran el menjar o serem nosaltres el seu àpat
bool trobada(string canviTalaiot) {
    cout << "T'estas apropant al talaiot...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Està fosc i és tenebrós...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Un gran gegant salta davant teu, t'agafa i ...\n\n";
    this_thread::sleep_for(chrono::seconds(2));
    
    srand(static_cast<unsigned int>(time(0)));
    int gegantamic = rand() % 2 + 1; // 1 o 2 per escollir el talaiot correcte
    
    if (canviTalaiot == to_string(gegantamic)) {
        cout << "Et convida a menjar...\n";
        return true; // Vol dir que el jugador guanya punts
    } else {
        cout << "Se't menja d'un mos...ÑAMÑAMÑAM\n";
        return false; // El jugador perd
    }
}

// Funció principal
int main() {
    string partidaNova = "si";
    int punts = 0; // Variable per acumular els punts

    while (partidaNova == "s" || partidaNova == "si") {
        intro();
        string nTalaiot = canviTalaiot();
        
        if (trobada(nTalaiot)) {
            punts++; // Si el jugador guanya, s'acumula un punt
            cout << "Punts actuals: " << punts << endl;
        } else {
            cout << "Has perdut! Els teus punts finals són: " << punts << endl;
            break; // Finalitza el joc si el jugador perd
        }
        
        cout << "Vols tornar a menjar (jugar)? Introdueixi si o no: ";
        cin >> partidaNova;
        cout << "\n";
    }

    cout << "Gràcies per jugar! Els teus punts finals són: " << punts << endl;
    return 0;
}