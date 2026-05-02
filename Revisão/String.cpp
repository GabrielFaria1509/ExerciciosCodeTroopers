#include<bits/stdc++.h>
using namespace std;

int main() {
   long n;
    string frase;

    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        getline(cin,frase);
        //Primeira cobversão : letras deslocada 3 posições pra direita(TABELA ASCII)

        for (int j = 0;j < frase.length();j++) {
            if (isalpha(frase[j])) { //Verifica se é letra
                frase[j] = frase[j] + 3;
            }
        }
        //Reverto
        reverse(frase.begin(), frase.end());

        int tamanho = frase.length();
        int meio = tamanho/2;

        for (int j = meio; j < tamanho;j++) {
            frase[j]--;
        }
        cout << frase << endl;
    }
    return 0;
}
