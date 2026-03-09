#include <iostream>
#include <vector>
#include <string>
using namespace std;

void elements_parells(const vector<string>& llista) {
    for (int i = 1; i < llista.size(); i += 2) {
        cout << llista[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<string> llista = {"apple", "banana", "cherry", "date", "elderberry"};

    cout << "Elements en posicions parelles: ";
    elements_parells(llista);

    return 0;
}