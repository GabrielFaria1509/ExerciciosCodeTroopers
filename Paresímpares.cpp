#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    int n; //casos de teste

    vector<int>pares;
    vector<int>impares;
   
    int x;

    cin >>n;

    for(int i = 0; i < n; i++){
        cin >>x;
        if(x % 2 == 0){
            pares.push_back(x);
        } else {
            impares.push_back(x);
        }
        
    }

    sort(pares.begin(), pares.end());  // Ordena os pares //ordem crescente
    sort(impares.begin(),impares.end()); // Ordena os ímpares //ordem crescente
    reverse(impares.begin(),impares.end()); // Inverte a ordem dos ímpares para ordem decrescente
    
    for(int k = 0; k < pares.size();k++){  // Imprime os pares em ordem crescente
        cout <<pares[k] << endl;
    }
    for(int j = 0; j < impares.size(); j++){ // Imprime os ímpares em ordem decrescente
        cout << impares[j] << endl;
    }

    return 0;
}
