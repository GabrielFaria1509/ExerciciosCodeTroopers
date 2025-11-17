#include <bits/stdc++.h>
using namespace std;

long long int fatorial(long long int num){
  if(num == 0){
    return 1;
  }
  else{
    return num * fatorial(num-1);
  }
}


int main() {
    
  long long int num1;
  long long int num2;

  while(cin >> num1 >> num2){
      long long int soma = fatorial(num1) + fatorial(num2);
      cout << soma << endl;
      
  }

  return 0;
}
