#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    int valor, vsorteado;
    int total = 0;
    float arr[6] = {};
    srand(time(NULL)); //Gera valores diferentes

    do{
        printf("Digite o valor de jogadas: \n");
        cin >> valor;

        for(int i = 1; i<=valor; i++){
            vsorteado = (rand()%6)+1; //Retorna valor aleatorio de 1 a 6
            arr[vsorteado] = arr[vsorteado]+1;
            total += 1;
        }
    }while(valor != 0);

    for(int j=1; j<=6; j++){
        cout << "Face " << j << " tem o percentual de: "<< (arr[j]*100)/total << "%" << endl;
    }
}
