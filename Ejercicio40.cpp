#include <iostream>
#include <vector>
using namespace std;

vector<int> eliminarcapicua(const vector<int>& llista) {
    vector<int> nova_llista;
    int n = llista.size();

    if (n > 2) {
        for (int i = 1; i < n - 1; i++) {
            nova_llista.push_back(llista[i]);
        }
    }

    return nova_llista;
}

int main() {
    vector<int> llista = {1, 2, 3, 4, 5, 6};
    
    vector<int> nova_llista = eliminarcapicua(llista);

    cout << "Llista original: ";
    for (int i = 0; i < llista.size(); i++) {
        cout << llista[i] << " ";
    }
    cout << endl;

    cout << "Nova llista sense primer i últim element: ";
    for (int i = 0; i < nova_llista.size(); i++) {
        cout << nova_llista[i] << " ";
    }
    cout << endl;

    return 0;
}