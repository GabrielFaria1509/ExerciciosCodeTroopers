#include <bits/stdc++.h>
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

int main()
{
    int n;        // número de mármores
    int q;        // número de consultas
    int x;        // mármore a ser consultado
    int posicao;  // auxiliar para a posição do mármore
    int casos = 0;

    cin >> n >> q;

    while (n != 0 && q != 0) // verifica se n e q são diferentes de zero
    {
        int *vetor = new int[n]; // vetor de mármores
        int *p = vetor;          // ponteiro para o vetor de mármores

        casos++; // incrementa o número de casos
        cout << "CASE# " << casos << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> *p; // lendo os mármores
            p++;       // incrementando o ponteiro
        }

        sort(vetor, vetor + n); // ordenando o vetor de mármores

        
        for (int i = 0; i < q; i++)
        {
            cin >> x; // lendo o mármore a ser consultado

            posicao = binaria(vetor, n, x); // buscando a posição do mármore

            if (posicao != -1) // verifica se o mármore foi encontrado
            {
                
                cout << x << " found at " << posicao + 1 << endl;
            }
            else
            {
                
                cout << x << " not found" << endl;
            }
        }

        delete[] vetor; // libera a memória alocada para o vetor de mármores

        n = 0;
        q = 0;
        x = 0;
        posicao = 0;
        p = NULL;

        cin >> n >> q; // lê novamente n e q para continuar o loop
    }

    return 0;
}
