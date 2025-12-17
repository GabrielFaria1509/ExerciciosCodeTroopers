#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int custopordia;
    vector<int>receita;
    int n;  //número de dias do circo na cidade

    while(cin >> n){
      cin >> custopordia;  //armazena custo por dia do circo
      
      for(int i = 0; i < n; i++){
        int receitadia;
        
        cin >> receitadia;  //armazena receita por dia do circo
        receita.push_back(receitadia);
      }

      int maxlucro = 0;
      int lucroatual = 0;

      for(int i = 0; i < n;i++){
       int lucrodia = receita[i] - custopordia;
       
       lucroatual += lucrodia;

       if(lucroatual < 0){
        lucroatual = 0;
       }
       if(lucroatual > maxlucro){
        maxlucro = lucroatual;
       }
      }

      cout << maxlucro << endl;

    maxlucro = 0;
    receita.clear();
    }


    return 0;
      
}
