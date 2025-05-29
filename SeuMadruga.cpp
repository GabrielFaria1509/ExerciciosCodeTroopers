#include<bits/stdc++.h>
using namespace std;
int binaria(int vetor[], int tamanho, int x) // auxiliar para a busca binária
{
    int baixo = 0, meio, alto = tamanho - 1;
    int achou = -1;

    while ((baixo <= alto))
    {
        meio = (baixo + alto) / 2;

        if (x < vetor[meio])
        {
            alto = meio - 1;
        }
        else if (x > vetor[meio])
        {
            baixo = meio + 1;
        }
        else
        {
            achou = meio;
            alto = meio - 1; // continua procurando para encontrar a primeira ocorrência
        }
    }

    
    return achou; // retorna a posição do mármore encontrado ou -1 se não encontrado   
}

int main(){
    int n; //número de tiras
    int a; // área resultante esperada
    cin >> n >> a;

    int comprimentotiras[n]; // vetor para armazenar os comprimentos das tiras

    for(int i = 0; i < n; i++) {
        cin >> comprimentotiras[i]; // leitura dos comprimentos das tiras
    }


}
