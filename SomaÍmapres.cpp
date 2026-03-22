#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x;
    int y;

    cin >> x >> y;

    //soma dos ímpares entre x e y
    int soma = 0;

    int inicio = min(x, y) + 1;
    int fim = max(x, y);
    for(int i = inicio; i < fim; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }
               
    cout << soma << endl;
    return 0;
}
