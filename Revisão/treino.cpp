#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int>v;
    int resposta;
    cin >> n;
    while(n--) {
        cin >> resposta;
        v.push_back(resposta);
    }
    int contador = 1;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == v[i + 1]) {
            contador +=1;
        }else {
            cout << v[i] << " aparece " << contador << " vez(es)" << endl;
            contador = 1;
        }

    }

    return 0;
}
