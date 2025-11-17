#include <bits/stdc++.h>
using namespace std;

int main() {
    
  int n;
  int fig1;
  int fig2;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> fig1 >> fig2;

    //acho maior divior comum 
    int maiordivisorcomum = gcd(fig1, fig2);

    cout << maiordivisorcomum << endl;

    maiordivisorcomum = 0;
    }

  return 0;
}
