#include<bits/stdc++.h>
using namespace std;

int main(){
    bool dias[210];
    vector<int> paos;
    for(int i=0; i<210; i++){
        dias[i] = false;
    }
    int N, D, d;
    int cont = 0;

    // Entrada no número de paes e o estado ideal
    cin >> N >> D;

    // Entrada de cada pão e o seu estado atual
    for(int i=0; i<N; i++){
        cin >> d;
        paos.push_back(d);
    }
    sort(paos.begin(), paos.end());
    for(int i=0; i<paos.size(); i++){
        // Se o estado do pão for maior que que o estado ideal e aquele lugar não estiver ocupado, validar
        if(paos[i]>=D && !dias[paos[i]-D]){
            dias[paos[i]-D] = true;
        }
        else if(!dias[paos[i]+D]){
            dias[paos[i]+D] = true;
        }
    }
    for(int i=0; i < 210; i++){
        if(dias[i]) cont++;
    }
    cout << cont;
    //system("pause");
}
