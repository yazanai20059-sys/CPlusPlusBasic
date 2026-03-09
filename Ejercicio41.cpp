#include <iostream>
#include <vector>
using namespace std;

string esta_ordenada(const vector<int>& llista) {
    bool ascendent = true;
    bool descendent = true;

    for (size_t i = 1; i < llista.size(); i++) {
        if (llista[i] < llista[i - 1]) {
            ascendent = false;
        }
        if (llista[i] > llista[i - 1]) {
            descendent = false;
        }
    }

    if (ascendent) {
        return "Està ordenada de forma ascendent.";
    } else if (descendent) {
        return "Està ordenada de forma descendent.";
    } else {
        return "No està ordenada.";
    }
}

int main() {
    vector<int> llista;

    int n;
    cout << "Introdueix la quantitat d'elements de la llista: ";
    cin >> n;

    cout << "Introdueix els elements de la llista: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        llista.push_back(num);
    }

    cout << esta_ordenada(llista) << endl;

    return 0;
}