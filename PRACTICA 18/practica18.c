#include <stdio.h>
#include <string.h>

void multiplicaVector(int *vector,int nl,int numero);

int main(void){
    int vector[10]={1,2,3,4,5,6,7,8,9,10};
    multiplicaVector(&vector[0],10,3);

    for(int i=0;i<10;i++){
        printf("%d, ",vector[i]);
    }
    return 0;
}

void multiplicaVector(int *vector, int nl, int numero){
    for (int i = 0; i < nl; i++){   
        *(vector+i) = *(vector+i) * numero;
    }
    
}