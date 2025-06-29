#include <iostream>
#include <string>
#include <sstream> // para usar stringstream e separar as palavras
using namespace std;

// Estrutura para armazenar a frase original e a sigla gerada
struct dados {
    string frase;
    string sigla;
};

int main() {
    int n;
    cin >> n;       // lê a quantidade de frases
    cin.ignore();   // ignora o caractere de nova linha após o número

    dados frases[n]; // vetor de estruturas para armazenar cada frase e sua sigla

    // Laço para ler todas as frases
    for (int i = 0; i < n; i++) {
        getline(cin >> ws, frases[i].frase); // lê a linha completa (frase), ignorando espaços à esquerda

        stringstream ss(frases[i].frase); // cria um fluxo para separar a frase por palavras
        string palavra;
        frases[i].sigla = ""; // inicializa a sigla como string vazia

        // Enquanto houver palavras na frase
        while (ss >> palavra) {
            frases[i].sigla += palavra[0]; // adiciona a primeira letra da palavra à sigla
        }
    }

    // Laço para exibir a sigla de cada frase
    for (int i = 0; i < n; i++) {
        cout << frases[i].sigla << endl; // imprime a sigla correspondente à frase
    }

    return 0;
}
