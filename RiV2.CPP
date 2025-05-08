#include<bits/stdc++.h>
using namespace std;
int main(){
    string risada;

    getline(cin, risada); // Lê a string de entrada

    //char resultado;
reverse(risada.begin(), risada.end());
    cout << risada << endl; // Imprime a string invertida
/*
    for(int i = 0; i < risada.size();i++){
        if(risada[i] == inverso[i] == "a" || risada[i] == inverso[i] == "e" || risada[i] == inverso[i] == "i" || risada[i] == inverso[i] == "o" || risada[i] == inverso[i] == "u"){
            resultado = 'S'; // Se a vogal for igual, atribui 'S'
    }else{
            resultado = 'N'; // Se não for igual, atribui 'N'
        }
    }
*/
    //cout << resultado << endl; // Imprime o resultado

    return 0;
}
