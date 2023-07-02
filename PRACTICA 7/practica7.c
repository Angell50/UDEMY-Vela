#include <stdio.h>

int main(void){
    int dia;
    printf("Ingrese un numero del dia de la semana\n");
    scanf("%d",&dia);
    switch (dia)
    {
    case 1:
        printf("LUNES");
        break;
    case 2:
        printf("MARTES");
        break;
    case 3:
        printf("MIERCOLES");
        break;
    case 4:
        printf("JUEVES");
        break;
    case 5:
        printf("VIERNES");
        break;
    case 6:
        printf("SABADO");
        break;
    case 7:
        printf("DOMINGO");
        break;
    default:
        printf("DIA NO VALIDO");
        break;
    }
    return 0;
}