#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int contador = 0;
    int Lucrototal = 0;
    int somareceita = 0;
    int lucroestadia = 0;
    int receitadia;
    int custoestadia = 0;
    int custodia;

    while(cin >> n){
        cin >> custodia;
        custoestadia = 0;
        custoestadia = custodia * n;
        cin >> receitadia;
        somareceita = 0;
        somareceita+= receitadia;
        contador++;
        if(contador == n){
            lucroestadia = somareceita - custoestadia;
            Lucrototal += lucroestadia;
        }

    }

    cout << Lucrototal << endl;

    return 0;
}
