#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<string, int> llista_a_diccionari(const vector<string>& llista) {
    map<string, int> diccionari;
    for (int i = 0; i < llista.size(); i++) {
        diccionari[llista[i]] = i;
    }
    return diccionari;
}

int main() {
    vector<string> llista = {"casa", "cotxe", "cadira", "taula"};
    map<string, int> resultat = llista_a_diccionari(llista);

    cout << "Diccionari: {";
    for (auto it = resultat.begin(); it != resultat.end(); ++it) {
        cout << "'" << it->first << "':" << it->second;
        if (next(it) != resultat.end()) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
