#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //casos de teste
    set<string>livros;
    string x;  //livro

    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin>> x;
            livros.insert(x);
        }

        for(auto it = livros.begin(); it != livros.end(); it++){
            
            cout << *it << endl;
        }

        livros.clear(); // Limpa o conjunto para o próximo caso de teste
    }
    
    return 0;
}
