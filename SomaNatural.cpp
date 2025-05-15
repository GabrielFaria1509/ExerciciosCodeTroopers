#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long int a,b,r;
    
    cin >> a >> b; // 
    //a é o limite inferior e b é o limite superior

    r = ((a + b) * (b - a + 1)) / 2; // Soma dos números inteiros entre a e b

    cout << r << endl; // Imprime o resultado da soma

    return 0;
}
