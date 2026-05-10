#include<bits/stdc++.h>
using namespace std;

int main(){
     
    
    int n;
    deque<int>d;

    cin >> n; // Quantidade de elementos deste caso

    for(int i=0;i<n;i++){
        d.push_back(i); //adiciona eleemntos no final do deque
        cout << "Adiconando: " << i << endl;
    }

    d.pop_back(); //remove o ultimo elemento do deque
    d.pop_front(); //remove o primeiro elemento do deque
    cout << d.front() <<endl;
    cout << d.back() <<endl;

    for(int i=0;i<d.size();i++){
        cout << d[i] << " "; //acessa os elementos do deque usando o operador []
    }
    cout << endl;
    cout<<d.size();

    return 0;
     
}
