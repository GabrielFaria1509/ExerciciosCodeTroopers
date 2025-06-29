#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int a, b;
    vector<long long int> respostas;

    cin >> n; // <- Faltava isso

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        if (a % b == 0) {
            respostas.push_back(0); // se a for divisível por b, resposta é 0
        } else {
            long long int contador = 0;
            while (a % b != 0) {
                a += 1;
                contador++;
            }
            respostas.push_back(contador); // total de aumentos feitos
        }
    }
    vector<long long int>::iterator it;
    // Corrigido: imprime as respostas corretamente
    for (it = respostas.begin(); it != respostas.end(); ++it) {
        cout << *it << endl; // imprime cada resposta em uma linha
    }

    return 0;
}
