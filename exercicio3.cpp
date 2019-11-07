#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    int valor, vsorteado;
    int total;
    srand(time(NULL)); //Gera valores diferentes

    do{
        printf("Digite o valor de jogadas: \n");
        cin >> valor;
        float arr[6] = {};
        for(int i = 1; i<=valor; i++){

            vsorteado = rand()%5;
            arr[vsorteado] = arr[vsorteado]+1;

        }
        for(int j=0; j<6; j++){
            cout << "Face " << (j+1) << " tem o percentual de: "<< (arr[(j)]*100)/valor << "%" << endl;
        }
    }while(valor != 0);


}

