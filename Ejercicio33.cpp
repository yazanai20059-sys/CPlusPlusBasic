#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double capital, interes, cfinal;
    int anys;

    cout << "Introdueix el capital (50000 - 800000): ";
    cin >> capital;

    cout << "Introdueix l'interes (0.5 - 13): ";
    cin >> interes;

    cout << "Introdueix els anys (3 - 40): ";
    cin >> anys;

    if(capital >= 50000 && capital <= 800000 &&
       interes >= 0.5 && interes <= 13 &&
       anys >= 3 && anys <= 40) {

        cfinal = capital * pow(1 + interes/100, anys);

        cout << "Capital final: " << cfinal << " €" << endl;
    }
    else {
        cout << "Alguna dada no es valida" << endl;
    }

    return 0;
}