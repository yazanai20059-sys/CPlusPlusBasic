#include <iostream>
#include <vector>

using namespace std;

int Sumar_llista(const vector <int>& l){
    int s=0;
    for (int v : l) {
        s += v;
    }
    return s;
}
int Multiplicar_llista(const vector <int>& l){
    int m=1;
    for (int v : l) {
        m *= v;
    }
    return m;
}
int main(){
    vector <int> a = {1, 2, 3, 4};
    cout << Sumar_llista(a) << endl;
    cout << Multiplicar_llista(a) << endl;
}