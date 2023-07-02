#include <stdio.h>
#include <string.h>
#include "lecturas.h"
#include <stdlib.h>

int main(void){
    FILE *fil;
    int opcion;
    opcion = leerNumeroEntre("Ingresar un numero entre 1 y 10\n");
    fil = fopen("tabla.txt","w");
    for(int i=0;i<=10;i++){
        fprintf(fil,"%d\n",i*opcion);
    }

    fclose(fil);
    return 0;
}

