#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    int valor, vsorteado;
    srand(time(NULL));
    vsorteado = (rand()%100)+1; //Retorna valor aleatorio de 0 a 100

    do{
        printf("Digite um valor: \n");
        cin >> valor;

        if(valor>vsorteado){
            printf("Muito alto. Tente novamente \n");
        }else if(valor<vsorteado){
            printf("Muito baixo. Tente novamente \n");
        }
    }while(valor != vsorteado);

    printf("Parabens voce adivinhou o numero \n");
}
