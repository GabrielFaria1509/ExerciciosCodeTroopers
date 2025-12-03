#include <bits/stdc++.h>
using namespace std;

long int lcd(long int valor, long int nota) {
    return valor / nota;
}

int main() {
    
  long int dinehirototal;
  long int notas100;
  long int notas50;
  long int notas20;
  long int notas10;
  long int notas5;
  long int notas2;
  long int notas1;

  cin >> dinehirototal;

  //quero montar a quantia total usando o mínimo das notas possíveis

  long int resto = dinehirototal;

  cout << dinehirototal << endl;
  
  notas100 = lcd(resto, 100);
  resto = resto % 100;
  
  notas50 = lcd(resto, 50);
  resto = resto % 50;
  
  notas20 = lcd(resto, 20);
  resto = resto % 20;
  
  notas10 = lcd(resto, 10);
  resto = resto % 10;
  
  notas5 = lcd(resto, 5);
  resto = resto % 5;
  
  notas2 = lcd(resto, 2);
  notas1 = resto % 2;

  cout << notas100 << " nota(s) de R$ 100,00" << endl;
  cout << notas50 << " nota(s) de R$ 50,00" << endl;
  cout << notas20 << " nota(s) de R$ 20,00" <<endl;
  cout << notas10 << " nota(s) de R$ 10,00" <<endl;
  cout << notas5 << " nota(s) de R$ 5,00" <<endl;
  cout << notas2 << " nota(s) de R$ 2,00" <<endl;
  cout << notas1 << " nota(s) de R$ 1,00" <<endl;

  return 0;
}
