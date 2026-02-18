#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x;
    while (x!=0){
        cout << "Salir pon 0\n" << endl;
        cout << "entero pon 1\n" << endl;
        cout << "Decimal pon 2\n" << endl;
        cin >> x;
        if (x==1){
            int c, v;
        cout << "sumar pon 0\n" << endl;
        cout << "restar pon 1\n" << endl;
        cout << "dividir pon 2\n" << endl;
        cout << "multiplicar pon 3\n" << endl;
        cout << "potencia pon 4\n" << endl;
        cin >> x;
            if (x==0){
                cin >> c;
                cin >> v;
                cout << "tu respuesta es " << (c+v) << endl;
            }
            if (x==1){
                cin >> c;
                cin >> v;
                cout << "tu respuesta es " << (c-v) << endl;
            }
            if (x==2){
                cin >> c;
                cin >> v;
                cout << "tu respuesta es " << (c/v) << endl;
            }
            if (x=3){
                cin >> c;
                cin >> v;
                cout << "tu respuesta es " << (c*v) << endl;
            }
            if (x==4){
                cin >> c;
                cin >> v;
                cout << "tu respuesta es " << pow(c+v) << endl;
            }
        }
        if (x==1){
            double c, v;
        cout << "sumar pon 0\n" << endl;
        cout << "restar pon 1\n" << endl;
        cout << "dividir pon 2\n" << endl;
        cout << "multiplicar pon 3\n" << endl;
        cout << "potencia pon 4\n" << endl;
        cin >> x;
            if (x==0){
                cin >> c;
                cin >> v;
                cout << "tu respuesta es " << (c+v) << endl;
            }
            if (x==1){
                cin >> c;
                cin >> v;
                cout << "tu respuesta es " << (c-v) << endl;
            }
            if (x==2){
                cin >> c;
                cin >> v;
                cout << "tu respuesta es " << (c/v) << endl;
            }
            if (x=3){
                cin >> c;
                cin >> v;
                cout << "tu respuesta es " << (c*v) << endl;
            }
            if (x==4){
                cin >> c;
                cin >> v;
                cout << "tu respuesta es " << pow(c+v) << endl;
            }
        }
    }
}