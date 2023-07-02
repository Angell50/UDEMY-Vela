#include <stdio.h>

int main(void){
    int numeros[10]={4,79,9,75,-5,6,12,-19,0,1};
    int maximo = numeros[0],minimo = numeros[0];

    for(int i = 1;i<10;i++){
        if(numeros[i]>maximo){
             maximo = numeros[i];
        }
        if(numeros[i]<minimo){
             minimo = numeros[i];
        }
    }   
    printf("Valor maximo: %d\n",maximo);
    printf("Valor minimo: %d\n",minimo);
    return 0;
}