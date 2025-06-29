#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int a, b;
    vector<long long int> respostas;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;

        if (a % b == 0) {
            respostas.push_back(0);
        } else {
            respostas.push_back(b - (a % b));
        }
    }

    for (auto resposta : respostas) {
        cout << resposta << endl;
    }

    return 0;
}
