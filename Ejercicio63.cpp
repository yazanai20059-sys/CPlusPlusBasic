#include <iostream>
using namespace std;

void dividir(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error: No es pot dividir per zero!" << endl;
    } else {
        cout << "El resultat de la divisió és: " << num1 / num2 << endl;
    }
}

int main() {
    int num1, num2;

    cout << "Introdueix el primer número: ";
    cin >> num1;
    cout << "Introdueix el segon número: ";
    cin >> num2;

    dividir(num1, num2);

    return 0;
}