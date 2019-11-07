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
        total = 0;
        float arr[6] = {};
        for(int i = 1; i<=valor; i++){

            vsorteado = (rand()%6)+1; //Retorna valor aleatorio de 1 a 6
            arr[vsorteado] = arr[vsorteado]+1;
            total += 1;
            cout <<"sorteado "<< vsorteado << endl;
            cout <<arr[vsorteado]<<endl;

        }
        for(int j=0; j<6; j++){
            cout << "Face " << j+1 << " tem o percentual de: "<< (arr[j]*100)/total << "%" << endl;
        }
    }while(valor != 0);


}
