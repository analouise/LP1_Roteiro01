#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;

int main(){
    int camisa, nvotos, melhorjogador=0;
    float votos = 0;
    int arr[24]={};
    cout << fixed << setprecision(2);

    printf("Quem foi o melhor jogador: \n");

   while(1){
        printf("Número do jogador (0=fim): \n");
        cin >> camisa;

        if(camisa==0){
            break;
        }else if(camisa<1 || camisa>23){
            cout << "Informe um valor entre 1 e 23 ou 0 para sair!" << endl;
        }else{
            arr[camisa] = arr[camisa] + 1;
            votos = votos + 1;
        }
   }

   printf("Resultado da votacao: \n");
   cout << "Foram computados "<< votos << " votos."<< endl;
   cout <<"Jogador      Votos       %"<<endl;

   for(int i = 1; i<=23; i++){
        if(arr[i]!=0){
            cout << i<< "          "<<arr[i]<<"          "<<(arr[i]*100)/votos<<" %" << endl;
        }
         if(arr[i] >= arr[melhorjogador]){
            melhorjogador = i;
            nvotos = arr[i];
        }
   }

   cout << "O melhor jogador foi o " << melhorjogador <<" com "<< nvotos <<" votos."<< endl;
}

