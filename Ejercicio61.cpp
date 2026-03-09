#include <iostream>
#include <vector>
using namespace std;

vector<int> primers_parells(int n) {
    vector<int> llista;
    for (int i = 1; i <= n; i++) {
        llista.push_back(i * 2);  // Afegir els números parells multiplicant per 2
    }
    return llista;
}

int main() {
    int n = 10;
    vector<int> llista = primers_parells(n);

    cout << "Els 10 primers números parells: ";
    for (int i = 0; i < llista.size(); i++) {
        cout << llista[i] << " ";
    }
    cout << endl;

    return 0;
}