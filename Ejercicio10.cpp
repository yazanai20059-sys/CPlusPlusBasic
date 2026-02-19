#include <iostream>
#include <string>
#include <vector>

// Funció per calcular la longitud d'una cadena
int longitudCadena(const std::string& cadena) {
    return cadena.length();
}

// Funció per calcular la longitud d'una llista
template <typename T>
int longitudLlista(const std::vector<T>& llista) {
    return llista.size();
}

int main() {
    // Entrar una cadena per l'usuari
    std::string cadena;
    std::cout << "Escriu una cadena: ";
    std::getline(std::cin, cadena); // Llegeix tota la línia, incloent espais
    std::cout << "La longitud de la cadena és: " << longitudCadena(cadena) << std::endl;

    // Entrar una llista d'enters
    int n;
    std::cout << "Quants elements vols a la llista? ";
    std::cin >> n;

    std::vector<int> llista;
    std::cout << "Escriu " << n << " enters per la llista: ";
    for (int i = 0; i < n; ++i) {
        int elem;
        std::cin >> elem;
        llista.push_back(elem);
    }
    
    std::cout << "La longitud de la llista és: " << longitudLlista(llista) << std::endl;

    return 0;
}
