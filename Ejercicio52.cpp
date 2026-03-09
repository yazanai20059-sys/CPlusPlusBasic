#include <iostream>
using namespace std;

int main() {
    for (int i = 8; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}