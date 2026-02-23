#include <iostream>
#include <algorithm>
using namespace std;

string invertir(string t){
    reverse(t.begin(), t.end());
    return t;
}
int main(){
    string v = "CASA";
    cout << invertir(v) << endl;
    return 0;
}