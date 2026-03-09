#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Introdueix un número: ";
    cin >> num;

    bool trobat = false;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            cout << digit << " ";
            trobat = true;
        }
        num /= 10;
    }

    if (!trobat) {
        cout << "No hi ha dígits parells." << endl;
    }

    return 0;
}