#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //problema interativo maratona mineira de programacao 2025(problema D)
    double K;
    double probabilidade;

    cin >> K;

    //3 dados de 6 lados cada, total de 216 combinacoes possiveis
    //para cada combinacao, verificamos se a soma dos dados e igual a K
    double total_combinacoes = 0;
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {
            for(int k = 1; k <= 6; k++) {
                if(i + j + k == K) {
                    total_combinacoes++;
                }
            }
        }
    }

    probabilidade = (double)total_combinacoes / 216.0;

    cout << probabilidade << endl;

    return 0;
}
