#include <stdio.h>

int main(void){
    int precio,kilometros;
    float consumo,precioFinal;
    printf("Introduzca el valor del vehiculo\n");
    scanf("%d",&precio);
    printf("Introduzca el numero de kilometros\n");
    scanf("%d",&kilometros);
    printf("Introduzca el consumo del vehiculo\n");
    scanf("%f",&consumo);
    if(kilometros < 20000 && consumo <= 5){
        precioFinal = precio * 1.20;
    }else if(kilometros > 20000 && consumo <= 5){
        precioFinal = precio * 1.10;
    }else if(consumo > 5){
        precioFinal = precio * 1.05;
    }

    printf("El precio final del vehicuilo es: %.2f\n", precioFinal);
    return 0;
}

