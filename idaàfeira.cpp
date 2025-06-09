#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // Numéro de casos
    int produtosdisponiveis; // Número de produtos disponíveis
    map<string,float> produtos; // Conjunto para armazenar preços
    float gasto = 0; // Valor gasto
    float preco; // Preço do produto
    int m;  //produtos que o cliente quer comprar
    int quantidade; //quantidade do produto que irá ser comprado 
    string x;  // Nome do produto
    

    cin >> n;
    for (int i = 0; i < n; i++){

        cin >> produtosdisponiveis;

        for(int j = 0; j < produtosdisponiveis; j++){
            cin >> x >> preco; // Lê o nome do produto e seu preço
            produtos.insert({x,preco});  // Insere o produto e seu preço no mapa
        }

        cin >> m; // Número de produtos que o cliente quer comprar
        for(int k = 0; k < m; k++){             //produtos que cliente vai comprar 
            cin >> x >> quantidade;
            if(produtos.find(x) != produtos.end()){
                gasto += produtos[x] * quantidade; // Calcula o gasto total
            } else {
                cout << "Produto " << x << " nao encontrado." << endl; // Produto não encontrado
            }
        }

        cout << fixed << setprecision(2); // Formata a saída para duas casas decimais
        cout << "R$ " << gasto << endl;
        gasto = 0; // Reinicia o gasto para o próximo caso
        produtos.clear(); // Limpa o mapa de produtos para o próximo caso
    }

    return 0;
}
