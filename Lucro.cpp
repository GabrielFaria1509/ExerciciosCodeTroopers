#include<bits/stdc++.h>
using namespace std;
struct dados{
    int receitadia;
    int custodia;
    int lucrodia;
    int lucrototal;
    int n;
};
int main(){

    int n;
    dados vendas[100];
    int i = 0;
    int Lucrototal = 0;

    while(cin >> n){
        cin >> vendas[n].custodia;
        cin >> vendas[n].receitadia;
        vendas[n].lucrodia = vendas[n].receitadia - vendas[n].custodia;
        Lucrototal += vendas[n].lucrodia;
        i++;

        // Process the data
    }

    cout << Lucrototal << endl;

    return 0;
}
