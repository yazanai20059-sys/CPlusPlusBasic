#include <iostream>
#include <vector>
#include <limits.h>

int gran_llista(const std::vector<int>& llista) {
    int max_num = INT_MIN;

    for (int num : llista) {
        if (num > max_num) {
            max_num = num;
        }
    }

    return max_num;
}

int main() {
    std::vector<int> llista = {3, 45, 12, 89, 5, 23};

    int mes_gran = gran_llista(llista);

    std::cout << "El nombre més gran de la llista és: " << mes_gran << std::endl;

    return 0;
}