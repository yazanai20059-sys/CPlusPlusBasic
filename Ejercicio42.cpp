#include <iostream>
#include <vector>
#include <unordered_set>
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

    if (hi_ha_duplicats(llista)) {
        cout << "Hi ha duplicats a la llista." << endl;
    } else {
        cout << "No hi ha duplicats a la llista." << endl;
    }

    return 0;
}
