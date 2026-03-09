#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Introdueix un número entre 1 i 20: ";
    cin >> num;

    if (num >= 1 && num <= 20) {
        for (int i = 1; i <= 10; i++) {
            cout << num << " x " << i << " = " << num * i << endl;
        }
    } else {
        cout << "El número introduït no és vàlid." << endl;
    }

    return 0;
}