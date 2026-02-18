#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main() { 
string x, y;
cout << "Escribe nom de A:" << endl;
cin >> x;
cout << "Escribe nom de B:" << endl;
cin >> y;
cout << x.insert(x.size(),y) << endl;
return 0;
} 