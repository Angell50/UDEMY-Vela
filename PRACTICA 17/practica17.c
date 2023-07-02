#include <stdio.h>
#include <string.h>

int main(void){
    float numerosReales[5];
    

    for(int i = 0; i < 5; i++){   
        printf("Ingrese el digito %d\n",i+1);
        scanf("%f",&numerosReales[i]);
    }
    float *punteroNumero = &numerosReales[0];
    float media=0;

    for(int i=0;i<5;i++){
        media += *(punteroNumero+i);
    }
    media = media /5;

    printf("La media de los valores es: %.2f",media);
    return 0;
}