#include <iostream>
using namespace std;

int main() {
    cout << "Números parells fins a 100: ";
    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Números senars fins a 100: ";
    for (int i = 1; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}