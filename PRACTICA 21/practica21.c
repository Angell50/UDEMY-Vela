#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
    struct cilindro
    {
        float diametro;
        float carrera;
    };

    struct motor
    {
        int identificador;
        struct cilindro cilindro1;
        int numCilindros;
        float cilindrada;
    };

    struct motor motor1;
    
    printf("Introduce el identificador\n");
    scanf("%d",&motor1.identificador);
    printf("Introduce el diametro del cilindro\n");
    scanf("%f",&motor1.cilindro1.diametro);
    printf("Introduce la carrera del cilindro\n");
    scanf("%f",&motor1.cilindro1.carrera);
    printf("Introduce el numero de cilindros\n");
    scanf("%d",&motor1.numCilindros);

    motor1.cilindrada = (motor1.numCilindros*(motor1.cilindro1.carrera/10)*3.14*pow((motor1.cilindro1.diametro/10),2))/4;

    printf("Identificador: %d\n",motor1.identificador);
    printf("Diametro: %.2f\n",motor1.cilindro1.diametro);
    printf("Carrera: %.2f\n", motor1.cilindro1.carrera);
    printf("N cilindros: %d\n",motor1.numCilindros);
    printf("Cilindrada: %.2f\n",motor1.cilindrada);
    
    return 0;
}