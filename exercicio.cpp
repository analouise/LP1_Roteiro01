#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int valor, maiorv;
    maiorv = 0;

    do{
    printf("Digite um valor:\n");
    cin >> valor;

    if(valor >= maiorv){
        maiorv = valor;
    }

    }while(valor!=0);

    cout <<"Maior valor"<< maiorv <<endl;

}
