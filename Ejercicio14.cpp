#include <iostream>
#include <algorithm>
using namespace std;

string invertir(string t){
    reverse(t.begin(), t.end());
    return t;
}
string es_palindrom(string v){
    if (v == invertir(v)){
    cout << "verdader" << endl;
    }else{
       cout << "Fals" << endl; 
    }
    return 0;
}

int main(){
    string x;
    cin >> x;
    cout << es_palindrom(x) << endl;
}