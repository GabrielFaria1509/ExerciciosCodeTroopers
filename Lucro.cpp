#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // número de dias
    int custoPorDia;
    int receita[50];
    
    while (cin >> n) {
        cin >> custoPorDia;
        
        for (int i = 0; i < n; i++) {
            cin >> receita[i];
        }
        
        int max_lucro = 0;
        int lucro_atual = 0;
        
        for (int i = 0; i < n; i++) {
            // Calcula o lucro líquido para o dia i
            int lucro_dia = receita[i] - custoPorDia;
            
            // Atualiza o lucro atual (soma contígua)
            lucro_atual += lucro_dia;
            
            // Se o lucro atual ficar negativo, reinicia (melhor começar nova sequência)
            if (lucro_atual < 0) {
                lucro_atual = 0;
            }
            
            // Atualiza o máximo encontrado
            if (lucro_atual > max_lucro) {
                max_lucro = lucro_atual;
            }
        }
        
        cout << max_lucro << endl;
    }
    
    return 0;
}
