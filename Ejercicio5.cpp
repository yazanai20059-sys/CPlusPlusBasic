#include <iostream>
using namespace std;

int main() {
    cout << "Cual es tu edad" << endl;
    int x;
    cin >> x;
    if (x<18) {
        cout << "Eres menor que 18 años" << endl;
    }
    else if (x==18) {
        cout << "Tienes exactamente 18 años" << endl;
    }
    else {
        cout << "Eres mayor de edad" << endl;
    }
}