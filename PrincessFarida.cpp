#include <bits/stdc++.h>
using namespace std;

long long int dp[10005]; // memoização

// Função para calcular a coleta máxima de moedas
long long int coleta(long long int c[], int n, int i) {
    if (i >= n)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    long long int op1 = coleta(c, n, i + 1);          // Pular o monstro atual
    long long int op2 = c[i] + coleta(c, n, i + 2);   // Coletar moedas e pular um

    return dp[i] = max(op1, op2);
}

int main() {
    int nc; // número de casos
    int n;  // número de monstros
    long long int c[10005]; // moedas dos monstros

    cin >> nc;

    for (int i = 1; i <= nc; i++) {
        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> c[j];
        }

        memset(dp, -1, sizeof(dp)); // zera a tabela de memoização

        cout << "Case " << i << ": " << coleta(c, n, 0) << endl;
    }

    return 0;
}
