#include <iostream>
#include <list>

using namespace std;

bool superposicio(const list<int>& l1, const list<int>& l2) {
    for (int elem1 : l1) {
        for (int elem2 : l2) {
            if (elem1 == elem2) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    list<int> a, b;
    int n, m, valor;

    cout << "Quants elements te la llista a? ";
    cin >> n;
    cout << "Introdueix els elements de a:\n";
    for (int i = 0; i < n; i++) {
        cin >> valor;
        a.push_back(valor);
    }

    cout << "Quants elements te la llista b? ";
    cin >> m;
    cout << "Introdueix els elements de b:\n";
    for (int i = 0; i < m; i++) {
        cin >> valor;
        b.push_back(valor);
    }

    if (superposicio(a, b)) {
        cout << "Hi ha almenys un element en comu.\n";
    } else {
        cout << "No hi ha cap element en comu.\n";
    }

    return 0;
}