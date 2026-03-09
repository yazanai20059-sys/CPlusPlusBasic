#include <iostream>
using namespace std;

bool es_primer(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;

    cout << "Números primers entre 1 i 100: ";
    for (int i = 1; i <= 100; i++) {
        if (es_primer(i)) {
            cout << i << " ";
            count++;
        }
    }

    cout << endl;
    cout << "Hi ha " << count << " números primers entre 1 i 100." << endl;

    return 0;
}