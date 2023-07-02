#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nota;
    printf("Ingrese la calificacion del alumno \n");
    scanf("%d",&nota);
    if(nota < 5){
        printf("Suspenso");
    }else if(nota == 6){
        printf("Bien");
    }else if(nota == 7 || nota == 8){
        printf("Notable");
    }else if(nota == 9 || nota == 10){
        printf("Sobresaliente");
    }else{
        printf("Nota introducida no valida");
    }

    return 0;
}

