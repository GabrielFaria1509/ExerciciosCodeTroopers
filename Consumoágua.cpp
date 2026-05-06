#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cidade = 1;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (cin >> n && n != 0) {
        if (cidade > 1) cout << "\n";

        map<int, int> mp;  //map já ordena em crescente
        double totalpessoas = 0;
        double totalconsumo = 0;

        // 1. Primeiro lê todos os dados da cidade
        for (int i = 0; i < n; i++) {
            int p, c;
            cin >> p >> c;
            totalconsumo += c;
            totalpessoas += p;
            mp[c / p] += p; //chave eh o consumo por grupo
          //se repetir pessoas com mesmo consumo,basta adcionar essas pessoas ao par chave valor já existente
        }

        // 2. Agora imprime o cabeçalho da cidade
        cout << "Cidade# " << cidade++ << ":" << "\n";

        // 3. Imprime o agrupamento de consumo
        bool primeiro = true;
        for (auto const& [cons, pess] : mp) {
            if (!primeiro) cout << " ";
            cout << pess << "-" << cons;
            primeiro = false;
        }
        cout << "\n";

        // 4. Calcula e imprime a média truncada
        double media = totalconsumo / totalpessoas;
        
        // Usar printf ou setprecision com floor para garantir o truncamento
        cout << fixed << setprecision(2) << "Consumo medio: " << floor(media * 100 + 1e-9) / 100.0 << " m3." << "\n";
    }

    return 0;
}
