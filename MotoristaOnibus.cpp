#include <bits/stdc++.h>
using namespace std;

struct dados {
    long long casa;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Mineira de 2024 - E Motorista de ônibus

    long long n;
    map<long long, vector<long long>> ruas; //rua e as casas
    long long  rua;
    long long casa;
    dados mediana;
    long long distanciapercorridapassageiros = 0;
   
    
    cin >> n;

   for(long i = 0; i < n; i++) {
       cin >>  rua;
       cin >> casa;
       ruas[rua].push_back(casa);
       }

    //percorro as ruas e ordeno as casas para cada rua
    for(auto &r : ruas){
        sort(r.second.begin(), r.second.end());
        long tamanho = r.second.size();

        //se o número de casas for par, a mediana é a média dos dois valores centrais
        if(tamanho %2 == 0){
           mediana.casa = (r.second[tamanho/2] + r.second[(tamanho/2) - 1]) / 2;     
        }else{
            //se o número de casas for ímpar, a mediana é o valor central
            mediana.casa = r.second[tamanho/2];
        }

        //calculo a distância percorrida pelos passageiros para chegar ao ponto de parada do ônibus
        //passo por cada casa da rua e somo a distância percorrida pelos passageiros para chegar ao ponto de parada do ônibus
        
        for(long long j = 0; j < tamanho; j++){
            //se a casa for menor que a mediana, a distância percorrida pelos passageiros é a diferença entre a mediana e a casa
            if(r.second[j] < mediana.casa){
                distanciapercorridapassageiros += mediana.casa - r.second[j];
            //se a casa for maior que a mediana, a distância percorrida pelos passageiros é a diferença entre a casa e a mediana
            } else {
                distanciapercorridapassageiros += (r.second[j] - mediana.casa);
            }
        }

    }

    cout << distanciapercorridapassageiros << endl;

    //limpando
    ruas.clear();
    distanciapercorridapassageiros = 0;
    


    return 0;
}
