#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	
	long int fibo[65];    //VETOR FIBONNACI // ARMAZENA VALORES DA SEQU�NCIA
    int t;                //NUMERO DE TESTES
    
    cin >> t;
    
    for(int i = 0; i <= 60; i++){     //ESTRURUTRA DE REEPTI��O PARA CALCULAR A SEQU�NCIA
        if(i == 0){                   //PRIMEIRO TERMO � SEMPRE 0
            fibo[0] = 0;
        }else if(i == 1){             //SEGUNDO TERMO � SEMPRE 1
            fibo[1] = 1;
        }else{
            fibo[i] = fibo[i-1] + fibo[i-2];         //TERCEIRO EM DIANTE � SOMA DOS DOIS ANTERIORES
        }
    }
    
    for(int i = 0; i < t; i++){        //ESTRUTURA DE REPETIR ENTRADA 
        int x;                          //VALORES QUE PROCURO NA SEQU�NCIA
        cin >> x;
        cout << "Fib(" << x << ") = " << fibo[x] << endl;
    }
	
}
