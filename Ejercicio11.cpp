#include <iostream>


bool esVocal(char car) {
    
    car = tolower(car);
    
    // Comprovem si el caràcter és una de les vocals
    if (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u') {
        return true;
    }
    return false;
}

int main() {
    // Demanar un caràcter per a l'usuari
    char car;
    std::cout << "Escriu un caràcter: ";
    std::cin >> car;

    // Comprovem si és una vocal i mostrem el resultat
    if (esVocal(car)) {
        std::cout << "El caràcter " << car << " és una vocal." << std::endl;
    } else {
        std::cout << "El caràcter " << car << " és una Consonant." << std::endl;
    }

    return 0;
}
