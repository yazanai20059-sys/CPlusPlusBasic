#include <iostream>
using namespace std;

int edat(int a){
    if (a<18) {
        cout << "Eres menor que 18 años" << endl;
    }
    else if (a==18) {
        cout << "Tienes exactamente 18 años" << endl;
    }
    else {
        cout << "Eres mayor de edad" << endl;
    }
}
int main() {
    cout << "Cual es tu edad" << endl;
    int x;
    cin >> x;
    edat(x);
}