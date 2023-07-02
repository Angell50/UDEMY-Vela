#include <stdio.h>
#define PI 3.1416

int main(void){
    int radio;
    float resultado;
    printf("Introduce el radio del circulo: ");
    scanf("%d",&radio);
    resultado = radio * radio * PI;
    printf("El area del circulo es: %.2f",resultado);
    return 0;
}