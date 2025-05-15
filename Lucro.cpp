#include<bits/stdc++.h>
using namespace std;
void lucro(int n, int custopordia, int receita){
    
    int lucrodia;
    int lucrototal;

    lucrototal = 0;
    
    while(cin >> n){
        cin >> custopordia;
        cin >> receita;
        lucrodia = receita - custopordia;
        lucro(n,custopordia,receita);
        lucrototal += lucrodia;
    }
    
    cout << lucrototal << endl;


}
