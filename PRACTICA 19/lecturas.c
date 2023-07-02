#include <stdio.h>
#include "lecturas.h"

int leerEnteroPositivo(char *mensaje){
    int opcion;
    do
    {
        printf("%s",mensaje);
        scanf("%d",&opcion);
    } while (opcion < 0);
    return opcion;
    
}

int leerEnteroNegativo(char *mensaje){
    int opcion;
    do
    {
        printf("%s",mensaje);
        scanf("%d",&opcion);
    } while (opcion > 0);
    return opcion;
    
}

int leerNumeroEntre(char *mensaje){
    int opcion;
    do
    {
        printf("%s",mensaje);
        scanf("%d",&opcion);
    } while (opcion <= 1 || opcion >=10);
    return opcion;
    
}