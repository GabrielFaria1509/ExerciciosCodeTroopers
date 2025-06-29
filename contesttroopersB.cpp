#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matriz[5][5];
    int movimentosfeitos = 0;
    int linha, coluna;

    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matriz[i][j];
            if (matriz[i][j] != 0) {
                linha = i;
                coluna = j;
            }
        }
    }

    movimentosfeitos = abs(2 - linha) + abs(2 - coluna);

    cout << movimentosfeitos << endl;

    return 0;
}
