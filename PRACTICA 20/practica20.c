#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fil;
    fil = fopen("suma.txt","r");
    int suma=0, numero;

    while(feof(fil) == 0){
        fscanf(fil,"%d",&numero);
        suma += numero;
    }
    printf("La suma de todos los numeros del fichero es: %d\n",suma);
    fclose(fil);

    return 0;
}