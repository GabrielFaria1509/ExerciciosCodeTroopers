#include <iostream>     // para entrada e saída padrão (cin, cout)
#include <string>       // para usar strings (getline, etc)
#include <map>          // para usar mapas (map<chave, valor>)
using namespace std;

int main() {
    int n; // número de traduções disponíveis
    cin >> n;
    cin.ignore(); // limpa o '\n' que sobra do cin >> n

    map<string, string> traducoes; // mapa: idioma → tradução de "Feliz Natal"

    // Lê n pares de idioma + tradução
    for (int i = 0; i < n; i++) {
        string idioma, frase;
        getline(cin, idioma);     // lê o nome do idioma
        getline(cin, frase);      // lê a frase correspondente ("Feliz Natal" traduzido)
        traducoes[idioma] = frase; // adiciona ao mapa
    }

    int q; // número de crianças que receberão as etiquetas
    cin >> q;
    cin.ignore(); // limpa o '\n' após cin >> q

    // Para cada criança, lê nome e idioma, e imprime a etiqueta
    for (int i = 0; i < q; i++) {
        string nome, idioma;
        getline(cin, nome);     // lê o nome da criança
        getline(cin, idioma);   // lê o idioma que ela fala

        // Imprime etiqueta com nome e mensagem traduzida
        cout << nome << endl;
        cout << traducoes[idioma] << endl;
        cout << endl; // linha em branco obrigatória após cada etiqueta
    }

    return 0; // fim do programa
}
