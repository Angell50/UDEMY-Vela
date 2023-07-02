#include <stdio.h>

int main(void){
    int alumnos,contAprobados=0,contSuspenso=0;
    float nota;
    printf("Ingresa el numero de alumnos\n");
    scanf("%d",&alumnos);

    for(int i=1;i<=alumnos;i++){
        printf("Introduce la nota del alumno %d\n",i);
        scanf("%f",&nota);

        if(nota >= 5){
            contAprobados ++;
        }else{
            contSuspenso ++;
        }
    }
    printf("El numero de alumnos aprobados es: %d y el numero de alumnos suspensos es: %d",contAprobados,contSuspenso);
    return 0;
}