#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, c;
    cin >> l >> c;

    vector<string> matriz(l);
    for(int i = 0; i < l; i++){
        cin >> matriz[i]; // lê a linha inteira como string, ex: "01010"
    }

    bool vizinho_igual = false;

    for(int i = 0; i < l && !vizinho_igual; i++){
        for(int j = 0; j < c && !vizinho_igual; j++){
            if((j + 1 < c && matriz[i][j] == matriz[i][j+1]) ||
               (i + 1 < l && matriz[i][j] == matriz[i+1][j])){
                vizinho_igual = true;
                break;
            }
        }
    }

    if(!vizinho_igual){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}
