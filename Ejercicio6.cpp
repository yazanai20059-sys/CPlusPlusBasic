#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    while (true) {
        cout << "Salir pon 0\n" << endl;
        cout << "Entero pon 1\n" << endl;
        cout << "Decimal pon 2\n" << endl;
        cout << "Escribe tu elecion: " << endl;
        cin >> x;

        if (x == 0) {
            break;  // Para salir del bucle
        }

        if (x == 1) {
            // Operaciones con enteros
            int c, v, o;
            cout << "Sumar pon 0\n" << endl;
            cout << "Restar pon 1\n" << endl;
            cout << "Dividir pon 2\n" << endl;
            cout << "Multiplicar pon 3\n" << endl;
            cout << "Escribe tu elecion: " << endl;
            cin >> o;

            cout << "Introduce el primer número: ";
            cin >> c;
            cout << "Introduce el segundo número: ";
            cin >> v;

            if (o == 0) {
                cout << "Tu respuesta es: " << (c + v) << endl;
            }
            else if (o == 1) {
                cout << "Tu respuesta es: " << (c - v) << endl;
            }
            else if (o == 2) {
                if (v != 0) {
                    cout << "Tu respuesta es: " << (c / v) << endl;
                } else {
                    cout << "No se puede dividir entre cero." << endl;
                }
            }
            else if (o == 3) {
                cout << "Tu respuesta es: " << (c * v) << endl;
            } else {
                cout << "Operación no válida." << endl;
            }
        }

        else if (x == 2) {
            // Operaciones con decimales
            double c, v;
            int operation;
            cout << "Sumar pon 0\n" << endl;
            cout << "Restar pon 1\n" << endl;
            cout << "Dividir pon 2\n" << endl;
            cout << "Multiplicar pon 3\n" << endl;
            cout << "Escribe tu elecion: " << endl;
            cin >> operation;

            cout << "Introduce el primer número: ";
            cin >> c;
            cout << "Introduce el segundo número: ";
            cin >> v;

            if (operation == 0) {
                cout << "Tu respuesta es: " << (c + v) << endl;
            }
            else if (operation == 1) {
                cout << "Tu respuesta es: " << (c - v) << endl;
            }
            else if (operation == 2) {
                if (v != 0) {
                    cout << "Tu respuesta es: " << (c / v) << endl;
                } else {
                    cout << "No se puede dividir entre cero." << endl;
                }
            }
            else if (operation == 3) {
                cout << "Tu respuesta es: " << (c * v) << endl;
            } else {
                cout << "Operación no válida." << endl;
            }
        }
    }
    return 0;
}
