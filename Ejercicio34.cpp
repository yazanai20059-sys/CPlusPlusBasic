#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    
    cout << "Introdueix un número menor de 100: ";
    cin >> num;

    if(num < 100) {
        int suma = 0;
        for(int i = num; i >= 0; i -= 4) {
            suma += pow(i, 2);
        }
        cout << "La suma dels quadrats és: " << suma << endl;
    } else {
        cout << "El número introduït no és vàlid." << endl;
    }

    return 0;
}