#include <iostream>
#include <list>

using namespace std;

void crear_punts(const list<int>& llista) {
    for (int num : llista) {
        for (int i = 0; i < num; i++) {
            cout << ".";
        }
        cout << endl;  // Salt de línia entre elements
    }
}

int main() {
    list<int> numeros = {3, 5, 2, 4};

    crear_punts(numeros);

    return 0;
}