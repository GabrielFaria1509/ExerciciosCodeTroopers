#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int esq[61] = {0}; // botas esquerda, índice = tamanho
        int dir[61] = {0}; // botas direita, índice = tamanho

        int tam;
        char pe;

        for (int i = 0; i < n; i++) {
            cin >> tam >> pe;

            if (pe == 'E')
                esq[tam]++;
            else if (pe == 'D')
                dir[tam]++;
        }

        int pares = 0;
        for (int i = 30; i <= 60; i++) {
            pares += min(esq[i], dir[i]);
        }

        cout << pares << endl;
    }

    return 0;
}
