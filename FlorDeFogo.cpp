#include <bits/stdc++.h>
using namespace std;
struct ponto {
    double x, y;
};


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    ponto coordenadas_cacador,coordenadas_flor;
    double raioflor;
    double raio_cacador;


    while(cin >> raio_cacador >> coordenadas_cacador.x >> coordenadas_cacador.y >> raioflor >> coordenadas_flor.x >> coordenadas_flor.y){
            //Se o caçador estivr numa distância menor ou igual ao raio da flor,ele consegue pegar a flor
            double distancia = sqrt(pow(coordenadas_flor.x - coordenadas_cacador.x, 2) + pow(coordenadas_flor.y - coordenadas_cacador.y, 2));
            if(distancia + raioflor <= raio_cacador){
                cout << "RICO" << endl;
            }else{
                cout << "MORTO" << endl;
            }
    }

    return 0;
}
