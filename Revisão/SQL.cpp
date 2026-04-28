#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sequencia(n);
    
    // Lendo todos os números
    for(int i = 0; i < n; i++) {
        cin >> sequencia[i];
    }

    // Começamos com 1 porque o primeiro número sempre faz parte da sequência final
    int contador = 1; 

    // Vamos até n - 1 para podermos olhar o i + 1 sem dar erro
    for(int i = 0; i < n - 1; i++) {
        if(sequencia[i] != sequencia[i+1]) {
            contador += 1;
        }
    }

    cout << contador << endl;

    return 0;
}
