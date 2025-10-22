#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    set<string> joias;  // Usar set para armazenar apenas joias únicas

    while (cin >> x) {  // Lê entrada até o fim do arquivo (EOF)
        joias.insert(x);
    }

    cout << joias.size() << endl;  // Imprime o número de joias únicas

    return 0;
}
