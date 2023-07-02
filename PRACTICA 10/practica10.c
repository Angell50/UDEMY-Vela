#include <stdio.h>

int main(void){
    int notas,cont=0,acu=0;
    float prom;
    printf("Ingrese las calificaciones del alumno: \n");

    do{
        scanf("%d",&notas);
        acu += notas;
        cont ++;
    }while(notas != 0);
    prom = acu/(cont-1);
    printf("El promedio del alumno es: %.2f",prom);
    return 0;
}