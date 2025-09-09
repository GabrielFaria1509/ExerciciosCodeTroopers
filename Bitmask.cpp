#include <bits/stdc++.h>
using namespace std;

/*bitset<4> ativarBit(bitset<4> n, int pos) {
    return n | bitset<4>(1 << pos);  // converte para bitset antes do OR
}

bool verificarBitAtivo(bitset<4> n, int pos) {
    return (n & bitset<4>(1 << pos)).any(); // checa se tem algum bit ativo
}

void removerBit(bitset<4> &n, int pos) {
    n = n & ~bitset<4>(1 << pos);  // máscara invertida
    cout << n << endl;
}

int main() {
    bitset<4> n(string("1010"));  // precisa ser string para binário
    cout << "Binario original : " << n << endl;

    cout << "Ativando bit 2: " << ativarBit(n, 2) << endl;

    cout << "Bit 2 esta ativo? " << (verificarBitAtivo(n, 2) ? "Sim" : "Nao") << endl;

    cout << "Removendo bit 3: ";
    removerBit(n, 3);
*/


#include <bits/stdc++.h>
using namespace std;

int ativarBit(int n, int pos) {
    return n | (1 << pos);  // liga o bit na posição "pos"
}

bool verificarBitAtivo(int n, int pos) {
    return (n & (1 << pos)) != 0;  // retorna true se o bit estiver ativo  //1 << pos é uma máscara que tem 1 apenas na posição pos e realiza um AND 
}

int removerBit(int n, int pos) {
    return n & ~(1 << pos);  // desliga o bit   //realiza um AND com a máscara invertida
    //se for 0 não altera nada
}

int main() {
    

    int n;
    cin >> n;

    cout << "Numero original (decimal): " << n << endl;
    cout << "Numero original(binario):" << bitset<4>(n) << endl;      //4 é o número de bits que queremos mostrar

    n = ativarBit(n, 2);
    cout << "Ativando bit 2 (decimal): " << n << endl;
    cout << "Ativando bit 2 (binário): " << bitset<4>(n) << endl;

    cout << "Bit 2 esta ativo? " << (verificarBitAtivo(n, 2) ? "Sim" : "Nao") << endl;

    n = removerBit(n, 3);
    cout << "Removendo bit 3 (decimal): " << n << endl;
    cout << "Removendo bit 3 (binario): " << bitset<4>(n) << endl;

    return 0;
}




   

