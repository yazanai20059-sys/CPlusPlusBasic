#include <iostream>
#include <string>
using namespace std;

int main() {
    string p1, p2;

    cout << "Introdueix la primera paraula: ";
    cin >> p1;

    cout << "Introdueix la segona paraula: ";
    cin >> p2;

    int l1 = p1.length();
    int l2 = p2.length();

    if (l1 >= 3 && l2 >= 3 && 
        p1.substr(l1-3,3) == p2.substr(l2-3,3)) {
        cout << "Rimen" << endl;
    }
    else if (l1 >= 2 && l2 >= 2 && 
             p1.substr(l1-2,2) == p2.substr(l2-2,2)) {
        cout << "Rimen un poc" << endl;
    }
    else {
        cout << "No rimen" << endl;
    }

    return 0;
}