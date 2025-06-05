#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; //casos de teste
    int nalunos;  //número de alunos
    int notasaluno; //nota do aluno

    vector<int>notasordenadas; //conjunto de notas ordenadas
    vector<int>notasdesordenadas; 

    int contador = 0;
    

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> nalunos;
        for(int j = 0; j < nalunos;j++){
            cin >> notasaluno;

            notasdesordenadas.push_back(notasaluno);
            notasordenadas.push_back(notasaluno);
        }

        sort(notasdesordenadas.begin(),notasdesordenadas.end());
        reverse(notasordenadas.begin(),notasordenadas.end());

        for(int k = 0; k < nalunos; k++){
            if(notasdesordenadas[k] == notasordenadas[k]){
                
                contador++;
                
            }
        }

        cout << contador << endl;
        notasordenadas.clear();
        notasdesordenadas.clear();
        contador = 0;

    }

    return 0;
}
