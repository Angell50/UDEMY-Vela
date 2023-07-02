#include <stdio.h>

int main(void){
    float base, altura,area;
    printf("Introduzca la base del rectangulo: \n");
    scanf("%f",&base);
    printf("Introduzca la altura del rectangulo: \n");
    scanf("%f",&altura);
    area = base * altura;
    printf("El area del rectangulo de base %.2f y altura %.2f es: %.2f",base,altura,area);    

    return 0;
}