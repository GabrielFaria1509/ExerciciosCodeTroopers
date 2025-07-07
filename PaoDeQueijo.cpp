#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int matriz[1000][1000];

    while (cin >> n >> m)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matriz[i][j];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matriz[i][j] == 1)
                {
                    cout << 9;
                }
                else
                {
                    int bombas = 0;
                    if (i > 0 && matriz[i - 1][j] == 1) bombas++;         // cima
                    if (i < n - 1 && matriz[i + 1][j] == 1) bombas++;     // baixo
                    if (j > 0 && matriz[i][j - 1] == 1) bombas++;         // esquerda
                    if (j < m - 1 && matriz[i][j + 1] == 1) bombas++;     // direita
                    cout << bombas;
                }
            }
            cout << '\n';
        }
    }

    return 0;
}
