#include<bits/stdc++.h>

using namespace std;

int main() {
    //Arquivo para revisão de STL

    //Revisão de vector,map,hashmap,unordered_map,set,unordered_set,queue,stack,priority_queue

    //Vector(Estrutura de dados dinâmica, que pode crescer ou diminuir de tamanho durante a execução do programa)
    //Aceita dados repetidos e mantém a ordem de inserção dos elementos
    vector<int> v; //declaração de um vector de inteiros
    v.push_back(1); //adiciona um elemento no final do vector
    v.push_back(2);
    v.push_back(3);
    sort(v.begin(), v.end()); //ordena os elementos do vector em ordem crescente
    sort(v.rbegin(), v.rend()); //ordena os elementos do vector em ordem decrescente
    //sort pode ser usado em vector,map,set,unordered_map,unordered_set etc

    v.pop_back(); //remove o último elemento do vector
    v.size(); //retorna o número de elementos do vector
    v.empty(); //retorna true se o vector estiver vazio, false caso contrário
    v.clear(); //remove todos os elementos do vector
    v.erase(v.begin() + 2); //remove o elemento na posição n do vector
    v.insert(v.begin() + 2, 10); //insere o elemento x na posição n do vector
    v[0]; //acessa o elemento na posição n do vector
    vector<int>().swap(v); //limpa o vector e libera a memória alocada para ele, deixando-o vazio e com capacidade zero
    
    //posso fazer vetor de structs,double etc

    //Map(Estrutura de dados que associa chaves a valores, onde cada chave é única e mapeada para um valor correspondente)
    //Não aceita dados repetidos
    //Segundo membro(valor) pode ser repetuido, mas a chave deve ser única
    //Segundo membro(valor) posso usar um vector, set, unordered_set etc
   
    map<int,int>*m2 = new map<int,int>(); //declaração de um map de inteiros para inteiros
    map<int, int>m; //declaração de um map de inteiros para inteiros
    m[1] = 10; //adiciona um par chave-valor ao map
    m[2] = 20;
    m[3] = 30;
    m.insert({4, 40}); //adiciona um par chave-valor ao map
    m.insert(make_pair(5,50)); 
    m.erase(2); //remove o elemento com chave 2 do map
    m.find(1); //retorna um iterador para o elemento com chave 1, ou end() se não encontrado
    m.size(); //retorna o número de elementos do map
    m.empty(); //retorna true se o map estiver vazio, false caso contrário
    m.clear(); //remove todos os elementos do map
    m.count(3); //retorna o valor com chave n
    m.clear(); //remove todos os elementos do map, mas mantém a memória alocada
    m.erase(2); //deleto um par -chave valor
    auto it = m.find(1); //encontra o elemento com chave 1 e retorna um iterador para ele
    if(it != m.end()) { //verifica se o elemento foi encontrado
        cout << "Valor encontrado: " << it->second << endl; //acessa o valor associado à chave 1
    } else {
        cout << "Valor não encontrado" << endl;
    }
    delete m2; //libera a memória alocada para o map m2

    //Deque(Estrutura de dados que permite a inserção e remoção de elementos em ambas as extremidades, ou seja, no início e no final da fila)
    //Aceita dados repetidos e mantém a ordem de inserção dos elementos
    deque<int> d; //declaração de um deque de inteiros
    d.push_back(1); //adiciona um elemento no final do deque
    d.push_front(2); //adiciona um elemento no início do deque
    d.pop_back(); //remove o último elemento do deque
    d.pop_front(); //remove o primeiro elemento do deque
    d.size(); //retorna o número de elementos do deque
    d.empty(); //retorna true se o deque estiver vazio, false caso contrário
    d.clear(); //remove todos os elementos do deque
    d.erase(d.begin() + 2); //remove o elemento na posição n do deque
    d.insert(d.begin() + 2, 10); //insere o elemento x na posição n
    d[0]; //acessa o elemento na posição n do deque
    deque<int>().swap(d); //limpa o deque e libera a memória alocada para ele, deixando-o vazio e com capacidade zero
    

    //Priority queue(Maior elemento fica no topo da fila)
    priority_queue<int> pq; //declaração de uma priority queue de inteiros
    pq.push(10); //adiciona um elemento à priority queue
    pq.push(20);
    pq.empty(); //retorna true se a priority queue estiver vazia, false caso contrário
    pq.size(); //retorna o número de elementos da priority queue
    pq.top(); //retorna o elemento no topo da priority queue (maior elemento)
    pq.pop(); //remove o elemento no topo da priority queue
    priority_queue<int>().swap(pq); //limpa a priority queue e libera a memória alocada para ela, deixando-a vazia e com capacidade zero

    //Set(Estrutura de dados que armazena elementos únicos, ou seja, não permite a inserção de elementos duplicados)
    //Não aceita dados repetidos e mantém a ordem de inserção dos elementos
    set<int> s; //declaração de um set de inteiros
    s.insert(10); //adiciona um elemento ao set
    s.insert(20);
    s.insert(30);
    s.erase(20); //remove o elemento 20 do set
    s.find(10); //procura elemento x 
    s.size(); //retorna o número de elementos do set
    s.empty(); //retorna true se o set estiver vazio, false caso contrário
    s.clear(); //remove todos os elementos do set
    s.count(30); //retorna o número de ocorrências do elemento x no set
    set<int>().swap(s); //limpa o set e libera a memória alocada para ele, deixando-o vazio e com capacidade zero

    //Unoerdered set(Estrutura de dados que armazena elementos únicos, mas não mantém a ordem de inserção dos elementos)
    //Não aceita dados repetidos e não mantém a ordem de inserção dos elementos
    unordered_set<int> us; //declaração de um unordered set de inteiros
    us.insert(10); //adiciona um elemento ao unordered set
    us.insert(20);
    us.insert(30);
    us.erase(20); //remove o elemento 20 do unordered set
    us.find(10); //procura elemento x
    us.size(); //retorna o número de elementos do unordered set
    us.empty(); //retorna true se o unordered set estiver vazio, false caso contrário
    us.clear(); //remove todos os elementos do unordered set
    us.count(30); //retorna o número de ocorrências do elemento x no unordered
    unordered_set<int>().swap(us); //limpa o unordered set e libera a memória alocada para ele, deixando-o vazio e com capacidade zero
    


    return 0;
}
