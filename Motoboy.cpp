#include <bits/stdc++.h>
using namespace std;

int encontrarMaxTempo(vector<pair<int,int>>& pedidos, int p) {
    int n = pedidos.size();
    vector<vector<int>> dp(n + 1, vector<int>(p + 1, 0));
    
    for(int i = 1; i <= n; i++) {
        int tempo = pedidos[i-1].first;
        int pizzas = pedidos[i-1].second;
        
        for(int j = 0; j <= p; j++) {
            // Não pega o pedido i
            dp[i][j] = dp[i-1][j];
            
            // Pega o pedido i (se couber)
            if(j >= pizzas) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-pizzas] + tempo);  //max retorna o maior valor entre os dois
            }
        }
    }
    
    return dp[n][p];
}

int main() {
    int n;
    
    while(cin >> n && n != 0){
        int p;
        cin >> p;
        
        vector<pair<int,int>> pedidos; // {tempo, pizzas}
        
        for(int i = 0; i < n; i++){
            int tempo, pizzas;
            cin >> tempo >> pizzas;
            pedidos.push_back({tempo, pizzas});
        }
        
        int tempo_total = encontrarMaxTempo(pedidos, p);


        
        cout << tempo_total << " min." << endl;
    }
    
    return 0;
}
