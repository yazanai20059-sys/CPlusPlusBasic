#include <iostream>
using namespace std;
bool esVocal(char car) {
    car = tolower(car);
    if (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u') {
        return true;
    }
    return false;
}

int main() {
    char car;
    cout << "Escriu un caràcter: ";
    cin >> car;
    if (esVocal(car)) {
        cout << "El caràcter " << car << " és una vocal." << endl;
    } else {
        cout << "El caràcter " << car << " és una Consonant." << endl;
    }
    return 0;
}
