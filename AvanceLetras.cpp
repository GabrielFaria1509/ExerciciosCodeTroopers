#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, s; // numero de testes, soma
	string a, b; // strings a -> inicial b -> final

	// pegando a quantidade de casos de teste
	cin >> n;

	// rodando os casos de teste
	for (int i = 0; i < n; i++)
	{
		s = 0; // soma = 0, redefinindo a cada caso

		// pegando as strings a e b
		cin >> a >> b;

		// calculando a distancia entre as strings
		for (int j = 0; j < b.size(); j++)
		{
			s += (b[j] - a[j]);
			
			// caso a distancia seja negativa, soma-se o alfabeto inteiro
			if (b[j] - a[j] < 0)
			{
				s += 26;
			}
		}

		// saida
		cout << s << endl;
	}

	return 0;
}