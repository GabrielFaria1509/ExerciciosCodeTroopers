#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, a, b, c;

    while (cin >> n >> a >> b >> c)
    {
        long long int maxpedacos = 0;

        // testa todas as combinações possíveis de quantos pedaços de 'a' e 'b'
        for (int i = 0; i <= n / a; i++) {
            for (int j = 0; j <= n / b; j++) {
                long long int resto = n - (i * a + j * b);

                // se o resto for divisível por c, temos uma combinação válida
                if (resto >= 0 && resto % c == 0) {
                    long long int k = resto / c;
                    long long int total = i + j + k;
                    maxpedacos = max(maxpedacos, total);
                }
            }
        }

        cout << maxpedacos << endl;
    }

    return 0;
}
