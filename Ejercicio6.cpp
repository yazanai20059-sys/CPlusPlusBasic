#include <iostream>
#include <cmath>   // Para usar pow()
using namespace std;

int main() {
    int x, y;

    cout << "Introduce un número: ";
    cin >> x;

    cout << "Introduce otro número: ";
    cin >> y;

    // Operaciones
    int suma = x + y;
    int resta = x - y;
    int multiplicacion = x * y;
    double division = (double)x / y;   // Convertimos a double para división decimal
    double potencia = pow(x, y);       // x elevado a y
    double porcentaje = (x * y) / 100.0;

    // Resultados
    cout << "La suma de " << x << " y " << y << " es: " << suma << endl;
    cout << "La resta de " << x << " y " << y << " es: " << resta << endl;
    cout << "La multiplicación de " << x << " y " << y << " es: " << multiplicacion << endl;
    cout << "La división de " << x << " y " << y << " es: " << division << endl;
    cout << "La elevación de " << x << " a " << y << " es: " << potencia << endl;
    cout << "El " << x << "% de " << y << " es: " << porcentaje << endl;

    return 0;
}
