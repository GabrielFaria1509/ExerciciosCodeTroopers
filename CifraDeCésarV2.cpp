Resposta do exercício Cifra de Cesar:
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, d; // numero de tentativas, deslocamento
	string a;

	cin >> n;

	// rodando os casos de teste
	for (int i = 0; i < n; i++)
	{
		cin.ignore(); // limpando o buffer
		getline(cin, a); // pegando a linha inteira
		cin >> d; // pegando o deslocamento

		// transformando a string
		for (int j = 0; j < a.size(); j++) // a.size() pega o tamanho da string
		{
			a[j] -= d; // fazendo o deslocamento
			if (int(a[j]) < 65) // comparando se saiu do alfabeto
			{
				a[j] += 26; // voltando para o alfabeto
			}
		}

		// saida
		cout << a << endl; 
	}

	return 0;
}
