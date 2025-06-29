#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n; //largura praça
    long long int m;  //altura praça
    long long int a;

    cin >> n >> m;

    cin >> a;         //lado quadrado piso

    long long int pisos_necessarios_largura = ceil((double)n/a);
    long long int pisos_necessarios_altura = ceil((double)m/a);

    cout << pisos_necessarios_altura*pisos_necessarios_largura << endl;
}
