#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Introdueix un número entre 1 i 900000: ";
    cin >> num;

    if (num >= 1 && num <= 900000) {
        int digits = 0;
        
        while (num > 0) {
            num /= 10;
            digits++;
        }
        
        cout << "El número té " << digits << " dígits." << endl;
    } else {
        cout << "El número introduït no és vàlid." << endl;
    }

    return 0;
}