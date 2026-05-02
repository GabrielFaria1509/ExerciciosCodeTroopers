#include<bits/stdc++.h>
using namespace std;

void ordenar(vector<int> &v) {
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

int main() {
    int n;
    vector<int>v;
    int resposta;
    cin >> n;
    while(n--) {
        cin >> resposta;
        v.push_back(resposta);
    }
    ordenar(v);

    int valor;

    cin >> valor;

    binary_search(v.begin(), v.end(), valor);

    cout << binary_search(v.begin(), v.end(), valor) << endl;

    return 0;
}
