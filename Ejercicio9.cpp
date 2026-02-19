#include <iostream>
using namespace std;

// Función que devuelve el mayor de tres números
int gran_de_tres(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    // Prueba de la función con diferentes ejemplos
    int num1, num2, num3;

    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;
    cout << "Introduce el tercer número: ";
    cin >> num3;

    int resultado = gran_de_tres(num1, num2, num3);
    cout << "El mayor de los tres números es: " << resultado << endl;

    return 0;
}
