#include <iostream>
#include <vector>
#include <unordered_set>
#include <cstdlib>
#include <ctime>
using namespace std;

bool hi_ha_duplicats(const vector<int>& llista) {
    unordered_set<int> elements;
    
    for (int num : llista) {
        if (elements.find(num) != elements.end()) {
            return true;
        }
        elements.insert(num);
    }
    
    return false;
}

vector<int> llista_20_elements() {
    vector<int> llista;
    for (int i = 0; i < 20; i++) {
        llista.push_back(rand() % 100 + 1);  // Generar número aleatori entre 1 i 100
    }
    return llista;
}

int main() {
    srand(time(0));

    vector<int> llista = llista_20_elements();

    cout << "Llista generada: ";
    for (int i = 0; i < llista.size(); i++) {
        cout << llista[i] << " ";
    }
    cout << endl;

    if (hi_ha_duplicats(llista)) {
        cout << "Hi ha duplicats a la llista." << endl;
    } else {
        cout << "No hi ha duplicats a la llista." << endl;
    }

    return 0;
}