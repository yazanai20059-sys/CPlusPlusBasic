#include <iostream>
using namespace std;

// Función que devuelve el mayor de dos números
int gran(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    // Prueba de la función con diferentes ejemplos
    int num1, num2;

    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;

    int resultado = gran(num1, num2);
    cout << "El mayor de los dos números es: " << resultado << endl;

    return 0;
}
