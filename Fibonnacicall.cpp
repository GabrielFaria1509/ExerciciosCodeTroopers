#include <bits/stdc++.h>
using namespace std;

int chamadas_fibonnaci = 0;  //variavel global para contar as chamadas da funcao


int fibonnacci(int n){
  chamadas_fibonnaci++; //incrementa a cada chamada 
  if(n == 0) return 0;
  if(n == 1) return 1;
  return (fibonnacci(n-1) + fibonnacci(n-2));
}
int main(){
  int n; //casos de teste
  int n_termo;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> n_termo;
    int resultado = fibonnacci(n_termo);
    cout << "fib(" << n_termo << ")" << " = " << chamadas_fibonnaci - 1 << " calls = " << resultado << endl;
    chamadas_fibonnaci = 0;
  }
  return 0;
}
