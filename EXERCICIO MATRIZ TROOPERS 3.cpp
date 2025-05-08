#include<iostream>
using namespace std;
int main()
{
	int linhas;      //linhas;
	int colunas;      //colunas;
	int i;       //contador;
	int j;   //contador 2
	int matriz[i][j];  //matriz feita
	
	
	cin>>linhas;           //entrada1
	cin>>colunas;          //entrada2
	for(i=0;i<linhas;i++)    //construção da matriz
	{
		for(j=0;j<colunas;j++)  
		{
			if(matriz[i]==matriz[j])  //construção diagonal principal
				matriz[i][j]=1;
			if(i+j==colunas)
			{
				matriz[i][j]=2;
			}
			else
			{
				matriz[i][j]=3;
			}
			
			
		}
	}
	for(i=0;i<linhas;i++)    //construção da matriz
	{
		for(j=0;j<colunas;j++)  
		{
			cout<<matriz[i][j];
			
			
		}
		cout<<endl;
	}

	
	return 0;
}