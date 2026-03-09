#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> elimina_duplicats(const vector<int>& llista) {
    unordered_set<int> elements;
    vector<int> llista_sense_duplicats;

    for (int num : llista) {
        if (elements.find(num) == elements.end()) {
            llista_sense_duplicats.push_back(num);
            elements.insert(num);
        }
    }

    return llista_sense_duplicats;
}

int main() {
    vector<int> llista = {1, 2, 3, 4, 5, 5, 6, 7, 8, 8, 9, 9};

    cout << "Llista original: ";
    for (int i = 0; i < llista.size(); i++) {
        cout << llista[i] << " ";
    }
    cout << endl;

    vector<int> nova_llista = elimina_duplicats(llista);

    cout << "Llista sense duplicats: ";
    for (int i = 0; i < nova_llista.size(); i++) {
        cout << nova_llista[i] << " ";
    }
    cout << endl;

    return 0;
}