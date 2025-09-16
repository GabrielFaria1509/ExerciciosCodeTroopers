#include <bits/stdc++.h>
using namespace std;

int main()
{
    // variaveis
    int n, c = 0; // grau do polinomio, contador
    bool x;       // auxiliar
    int r = 0;    // numero em binario

    // entrada
    cin >> n;

    // transformando o numero binario para decimal
    for (int i = n; i >= 0; i--)
    {
        cin >> x;
        if (x) 
        {
            r += pow(2, i);
        }
    }

    // executando a logica da resposta
    while (r > 1)
    {
        // se par desloca para direita
        if (r % 2 == 0)
        {
            r = r >> 1;
        }
        else // se impar desloca para esquerda e faz um xor com ele mesmo menos 1
        {
            r = (r << 1) ^ r;
            r--;
        }
        c++;
    }

    // saida
    cout << c << endl;

    return 0;
}
