#include<iostream>
using namespace std;
long int somaBinario(unsigned long int a,unsigned long int b){
    unsigned long  int soma;
    soma = a^b;

    return soma;
}


int main(){
    unsigned long int a;
    unsigned long int b;
    
    while(cin >> a >> b){
        cout << somaBinario(a, b) << endl;

    }
   
    return 0;  
}
