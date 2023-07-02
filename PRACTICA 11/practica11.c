#include <stdio.h>

int main(void){
    float pesos [5];
    float suma = 0,promedio = 0;
    for (int i = 0;i < 5 ;i++){
        printf("Introduce un peso para almacenarlo\n ");
        scanf("%f",&pesos[i]);
        suma += pesos[i];
    }
    promedio = suma / 5;
    int contMayorIgual = 0;
    int contMenor = 0;
    for (int i = 0;i<5;i++){
        if(pesos[i] > promedio){
            contMayorIgual ++;
        }else {
            contMenor ++;
        }
    }
    printf("N pesos mayores o iguales que el promedio: %d\n",contMayorIgual);
    printf("N pesos menores que el promedio: %d\n",contMenor);
    printf("El promedio de pesos es: %.2f", promedio);
    return 0;
}