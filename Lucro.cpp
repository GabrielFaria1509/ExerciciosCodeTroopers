#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int contador;
    int Lucrototal = 0;
    int somareceita;
    int lucroestadia;
    int receitadia;
    int custoestadia;
    int custodia;

    while(cin >> n){
        cin >> custodia;

        custoestadia = custodia * n;
        cin >> receitadia;
        somareceita+= receitadia;
        contador++;
        if(contador == n){
            lucroestadia = somareceita - custoestadia;
            Lucrototal += lucroestadia;
        }

        receitadia = 0;
        custoestadia = 0;
        somareceita = 0;
        contador = 0;

    }

    cout << Lucrototal << endl;

    return 0;
}
