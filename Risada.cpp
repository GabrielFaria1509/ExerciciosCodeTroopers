#include <bits/stdc++.h>
using namespace std;
int main(){

string kek; // risada
string reverso; // string das vogais invertida
string vogais;

 cin>>kek;

reverso = string(kek.rbegin(), kek.rend()); // atribuindo a risada reversa

for(int i=0; i < kek.size(); i++){
if(kek[i] == 'a' || kek[i] == 'e' || kek[i] == 'i' || kek[i] == 'o' || kek[i] == 'u'){
vogais.push_back(kek[i]);
}
}

reverso = string(vogais.rbegin(), vogais.rend()); // atribuindo a risada reversa

if(vogais == reverso){
cout<<"S"<<endl;
}else{
cout<<"N"<<endl;
}

return 0;
}
