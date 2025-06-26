#include <iostream>

using namespace std;

int valor[3] = {60, 100, 120};
int peso[3] = {10, 20, 30};
int pd[50 + 5][3 + 5];
int n = 3;
int c = 50;

// Retorna o valor máximo que pode ser colocado em uma mochila de capacidade C
int mochila(int capacidade, int i)
{
    // Pd
    if (pd[capacidade][i] != -1)
        return pd[capacidade][i] != -1;

    // Condição de parada
    if (i == n || capacidade == 0)
        return 0;

    // Se o peso do enésimo item é maior que a capacidade, pulamos o item
    if (peso[i] > capacidade)
        return pd[capacidade][i] = mochila(capacidade, i + 1);

    // Temos 2 opções do que fazer ao chegar no iteam atual:
    int op1 = mochila(capacidade, i + 1); // Nao pegar o item atual
    int op2 = valor[i] + mochila(capacidade - peso[i], i + 1); // Pegar o item atual

    // Retorna a melhor escolha
    return pd[capacidade][i] = max(op1, op2);
}

int main()
{
    for (int i = 0; i <= c; i++)
        for (int j = 0; j <= n; ++j)
            pd[i][j] = -1;

    cout << mochila(c, 0) << endl;

    return 0;
}
