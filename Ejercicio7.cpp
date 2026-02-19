#include <iostream>
#include <cmath>
#include <bitset>  // Per a convertir a binari
#include <sstream> // Per a convertir a hexadecimal
using namespace std;

// Funcions per a convertir a diferents bases
string toHexadecimal(int n) {
    stringstream ss;
    ss << hex << n;
    return ss.str();
}

string toBinary(int n) {
    return bitset<32>(n).to_string(); // El màxim de 32 bits
}

string toOctal(int n) {
    stringstream ss;
    ss << oct << n;
    return ss.str();
}

int main() {
    int x;
    while (true) {
        cout << "Salir pon 0\n" << endl;
        cout << "Entero pon 1\n" << endl;
        cout << "Decimal pon 2\n" << endl;
        cout << "Conversió de bases pon 3\n" << endl;
        cin >> x;

        if (x == 0) {
            break;  // Per sortir del bucle
        }

        if (x == 1) {
            // Operacions amb enters
            int c, v, operation;
            cout << "Sumar pon 0\n" << endl;
            cout << "Restar pon 1\n" << endl;
            cout << "Dividir pon 2\n" << endl;
            cout << "Multiplicar pon 3\n" << endl;
            cin >> operation;

            cout << "Introdueix el primer número: ";
            cin >> c;
            cout << "Introdueix el segon número: ";
            cin >> v;

            if (operation == 0) {
                cout << "La teva resposta és: " << (c + v) << endl;
            }
            else if (operation == 1) {
                cout << "La teva resposta és: " << (c - v) << endl;
            }
            else if (operation == 2) {
                if (v != 0) {
                    cout << "La teva resposta és: " << (c / v) << endl;
                } else {
                    cout << "No es pot dividir entre zero." << endl;
                }
            }
            else if (operation == 3) {
                cout << "La teva resposta és: " << (c * v) << endl;
            } else {
                cout << "Operació no vàlida." << endl;
            }
        }

        else if (x == 2) {
            // Operacions amb decimales
            double c, v;
            int operation;
            cout << "Sumar pon 0\n" << endl;
            cout << "Restar pon 1\n" << endl;
            cout << "Dividir pon 2\n" << endl;
            cout << "Multiplicar pon 3\n" << endl;
            cin >> operation;

            cout << "Introdueix el primer número: ";
            cin >> c;
            cout << "Introdueix el segon número: ";
            cin >> v;

            if (operation == 0) {
                cout << "La teva resposta és: " << (c + v) << endl;
            }
            else if (operation == 1) {
                cout << "La teva resposta és: " << (c - v) << endl;
            }
            else if (operation == 2) {
                if (v != 0) {
                    cout << "La teva resposta és: " << (c / v) << endl;
                } else {
                    cout << "No es pot dividir entre zero." << endl;
                }
            }
            else if (operation == 3) {
                cout << "La teva resposta és: " << (c * v) << endl;
            } else {
                cout << "Operació no vàlida." << endl;
            }
        }

        else if (x == 3) {
            // Convertir entre bases
            int number;
            int baseChoice;
            cout << "Introdueix un número enter: ";
            cin >> number;

            cout << "Selecciona la base a la qual vols convertir: \n";
            cout << "1. Binari\n";
            cout << "2. Octal\n";
            cout << "3. Decimal\n";
            cout << "4. Hexadecimal\n";
            cin >> baseChoice;

            switch(baseChoice) {
                case 1:
                    cout << "El número en binari és: " << toBinary(number) << endl;
                    break;
                case 2:
                    cout << "El número en octal és: " << toOctal(number) << endl;
                    break;
                case 3:
                    cout << "El número en decimal és: " << number << endl;
                    break;
                case 4:
                    cout << "El número en hexadecimal és: " << toHexadecimal(number) << endl;
                    break;
                default:
                    cout << "Opció no vàlida." << endl;
                    break;
            }
        }
    }
    return 0;
}
