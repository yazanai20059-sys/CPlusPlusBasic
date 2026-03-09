#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> paraules_per_letra(const vector<string>& llista, char lletra) {
    vector<string> result;
    for (const string& paraula : llista) {
        if (paraula[0] == lletra) {
            result.push_back(paraula);
        }
    }
    return result;
}

int main() {
    vector<string> llista = {"maria", "manta", "peu", "mà"};
    char lletra = 'p';

    vector<string> resultat = paraules_per_letra(llista, lletra);

    cout << "Paraules que comencen per '" << lletra << "': ";
    for (const string& paraula : resultat) {
        cout << paraula << " ";
    }
    cout << endl;

    return 0;
}