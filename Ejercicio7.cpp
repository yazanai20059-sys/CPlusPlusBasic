#include <iostream>
#include <cmath>   // Per a la funció pow()
#include <bitset>  // Per a la conversió a binari
using namespace std;

// Funció per a convertir a binari
void convertirBinari(int num) {
    cout << "Binari: " << bitset<32>(num) << endl; // A la base binària (32 bits)
}

// Funció per a convertir a octal
void convertirOctal(int num) {
    cout << "Octal: " << oct << num << endl; // A la base octal
    cout << dec;  // Revertim a la base decimal
}

// Funció per a convertir a hexadecimal
void convertirHexadecimal(int num) {
    cout << "Hexadecimal: " << hex << num << endl; // A la base hexadecimal
    cout << dec;  // Revertim a la base decimal
}

// Funció per a canviar la base d'un nombre a la base desitjada
void canviarBase(int num, int base) {
    if (base == 2) {
        convertirBinari(num);  // Convertim a binari
    } else if (base == 8) {
        convertirOctal(num);   // Convertim a octal
    } else if (base == 10) {
        cout << "Decimal: " << num << endl; // A la base decimal
    } else if (base == 16) {
        convertirHexadecimal(num); // Convertim a hexadecimal
    } else {
        cout << "Base no reconeguda!" << endl;
    }
}

int main() {
    int x, y;

    cout << "Introduce un número: ";
    cin >> x;

    cout << "Introduce otro número: ";
    cin >> y;

    // Operacions
    int suma = x + y;
    int resta = x - y;
    int multiplicacio = x * y;
    double divisio = (double)x / y;   // Convertim a double per a divisió decimal
    double potencia = pow(x, y);      // x elevat a y
    double porcentaje = (x * y) / 100.0;

    // Resultats de les operacions
    cout << "La suma de " << x << " i " << y << " és: " << suma << endl;
    cout << "La resta de " << x << " i " << y << " és: " << resta << endl;
    cout << "La multiplicació de " << x << " i " << y << " és: " << multiplicacio << endl;
    cout << "La divisió de " << x << " i " << y << " és: " << divisio << endl;
    cout << "La elevació de " << x << " a " << y << " és: " << potencia << endl;
    cout << "El " << x << "% de " << y << " és: " << porcentaje << endl;

    // Canvis de base
    int base;
    cout << "\nQuina base vols utilitzar (2 per binari, 8 per octal, 10 per decimal, 16 per hexadecimal)? ";
    cin >> base;

    // Canviar la base per als nombres introduïts i els resultats
    cout << "\nCanvis de base per als nombres introduïts:" << endl;
    canviarBase(x, base);
    canviarBase(y, base);
    canviarBase(suma, base);
    canviarBase(resta, base);
    canviarBase(multiplicacio, base);
    canviarBase(divisio, base);
    canviarBase(potencia, base);
    canviarBase(porcentaje, base);

    return 0;
}
