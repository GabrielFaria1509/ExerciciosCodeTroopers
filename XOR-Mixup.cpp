#include<iostream>
using namespace std;

int main(){
    long long int t; 
    cin >> t;
    for(int i = 0; i < t; i++){
        long long int n; 
        cin >> n;
        long long int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }

        // Como um dos elementos é o XOR com todos os outros,
        // qualquer elemento do array é uma resposta válida.
        cout << arr[n-1] << endl; 
    }
    return 0;
}
