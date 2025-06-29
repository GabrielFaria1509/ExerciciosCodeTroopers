#include <bits/stdc++.h>
using namespace std;

int main()
{
    string expressao;

    getline(cin, expressao);
    vector<char> numeros;

    for (int i = 0; i < expressao.size(); i++)
    {
        if (expressao[i] != '+')
        {
            numeros.push_back(expressao[i]);
        }
    }

    sort(numeros.begin(), numeros.end());

    for (int i = 0; i < numeros.size(); i++)
    {
        if (i != numeros.size() - 1)
        {
            cout << numeros[i] << "+";
        }
        else
        {
            cout << numeros[i] << endl;
        }
    }

    return 0;
}
