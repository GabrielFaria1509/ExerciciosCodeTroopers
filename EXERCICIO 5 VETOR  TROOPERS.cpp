#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

struct calcado{
	int tamanho;
	string L;
	
}bota[50];
int main(){
	int i,j;
	int n;
	int pares=0;
	int T;
	string L2;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>bota[i].tamanho;
		getline(cin >> ws, bota[i].L);
	}
	
	for(i=0;i<n;i++){
		T = bota[i].tamanho;
		L2 = bota[i].L;	

		for(j=0;j<n;j++){
			if(bota[j].tamanho == T && bota[i].L != L2){
				pares++;
				bota[j].tamanho = -1;
			}
		}	
	}

	cout << pares << endl;	
		
	}
	
	
	

