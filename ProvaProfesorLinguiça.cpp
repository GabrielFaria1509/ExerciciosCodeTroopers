#include<bits/stdc++.h>
using namespace std;

struct Questao{
    long long dificuldade;
    long long tempo;
};

struct Aluno{
    long long conhecimento; // Corrigido erro de digitação
    int indice_original;    // Trocado 'tempo' por 'indice_original'
};

// Ordena da mais fácil para a mais difícil
bool comparaQuestao(Questao a, Questao b){
    return a.dificuldade < b.dificuldade;
}

// Ordena aluno de menor conhecimento para o maior
bool compareAluno(Aluno a, Aluno b){
    return a.conhecimento < b.conhecimento;
}

int main(){
     
    // Otimizações
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int Q, N; // Q questões e N alunos
    long long T; // Tempo da prova

    // Lê os dados iniciais
    cin >> Q >> N >> T;

    // Leitura das questões
    vector<Questao> questoes(Q);
    for(int i = 0; i < Q; i++){
        cin >> questoes[i].dificuldade >> questoes[i].tempo;
    }

    // Leitura dos alunos
    vector<Aluno> alunos(N);
    for(int i = 0; i < N; i++){
        cin >> alunos[i].conhecimento; // O problema só passa o conhecimento do aluno
        alunos[i].indice_original = i; // Nós mesmos salvamos a ordem de chegada
    }

    // Chamo as funções de ordenação passando nossas próprias lógicas
    sort(questoes.begin(), questoes.end(), comparaQuestao);
    sort(alunos.begin(), alunos.end(), compareAluno);

    vector<int> resposta(N); // Vetor para guardar a resposta na ordem correta (removida a duplicata)
    priority_queue<long long> fila_tempos; // Max-heap: o maior tempo fica no topo
    
    long long tempo_total_atual = 0;
    int indice_questao = 0;
    
    // Itera sobre os alunos já ordenados por conhecimento
    for(int i = 0; i < N; i++){
        
        // Adiciona todas as questões que ESTE aluno consegue resolver
        // (Como os alunos estão ordenados, não precisamos recomeçar o indice_questao do zero!)
        while(indice_questao < Q && questoes[indice_questao].dificuldade <= alunos[i].conhecimento){
            
            long long tempo_q = questoes[indice_questao].tempo;
            fila_tempos.push(tempo_q);
            tempo_total_atual += tempo_q;
            
            // Se o tempo excedeu T, jogamos fora a questão mais demorada (que está no topo)
            while(tempo_total_atual > T){
                tempo_total_atual -= fila_tempos.top();
                fila_tempos.pop();
            }
            
            indice_questao++;
        }
        
        // A quantidade de itens que restou na fila é o máximo de questões possíveis
        resposta[alunos[i].indice_original] = fila_tempos.size();
    }
    
    // Imprime as respostas na ordem original da entrada
    for(int i = 0; i < N; i++){
        cout << resposta[i] << "\n";
    }
    
    return 0;
}
