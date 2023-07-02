#include <stdio.h>
#include <string.h>

int main(void){
    struct entrada
    {
        int hora;
        int minutos;
    };
    
    struct visita
    {
        struct entrada horaEntrada;
        int numeroAsistentes;
        float precioTotal;
    };
    
    struct visita informacion;

    char continuar = 'S';
    int edad;

    while(continuar =='S'){
        printf("Ingrese la hora de acceso/hora\n");
        scanf("%d",&informacion.horaEntrada.hora);
        printf("Ingrese la hora de entrada/min\n");
        scanf("%d",&informacion.horaEntrada.minutos);
        printf("Ingrese los numero de asistentes\n");
        scanf("%d",&informacion.numeroAsistentes);

        int total=0;
        for (int i=0;i<informacion.numeroAsistentes;i++){
            printf("Ingrese su edad del asistente %d\n",i+1);
            scanf("%d",&edad);
            if(edad < 6){
                total += 0;
            }else if(edad >= 6 && edad <= 15){
                total += 5;
            }else if((edad>=16 && edad <=25)||(edad > 65)){
                total += 8;
            }else{
                total += 10;
            }
        }
        if(informacion.numeroAsistentes >= 5){
            informacion.precioTotal = total -(total*0.10);
        }else{
            informacion.precioTotal = total;
        }
    
        printf("La hora de entrada es: %d\n",informacion.horaEntrada.hora);
        printf("Los minutos de entrada es: %d\n",informacion.horaEntrada.minutos);
        printf("Precio total: %.2f\n",informacion.precioTotal);
        printf("Quiere continuar con los datos de otro grupo?\n");
        scanf("%c",&continuar);
        while(continuar=='\n'){
            scanf("%c",&continuar);
        }
    }

    
   
    return 0;
}