#include <stdio.h>
#include <string.h>

int main(void){
    struct jugador
    {
        char nombre[50];
        int edad;
        float altura;
    };
    struct jugador jugadores[5];

    for(int i=0;i<5;i++){
        printf("Introduce el nombre del jugador %d\n",i+1);
        gets(jugadores[i].nombre);
        printf("Introduce la edad del jugador %d\n", i+1);
        scanf("%d",&jugadores[i].edad);
        printf("Introduce la altura del jugador %d\n",i+1);
        scanf("%f",&jugadores[i].altura);

        fflush(stdin);
    }
    
    int opcion = -1;
    

    while (opcion != 0)
    {
        printf("Introduce la opcion que deseas realizar\n");
        printf("1. Listar jugador\n");
        printf("2. Buscar jugador\n");
        printf("3. Jugador mas alto\n");
        printf("0. Salir\n");
        scanf("%d",&opcion);

        fflush(stdin);

        switch (opcion)
        {
        case 1:
            for(int i=0;i<5;i++){
                printf("El jugador %s mide %.2f\n",jugadores[i].nombre,jugadores[i].altura);
            }
            break;
        case 2:
            char nombreJugador[50];
            int buqueda=0;
            printf("Introduce le nombre del jugador que deseas buscar\n");
            gets(nombreJugador);
            for(int i=0;i<5;i++){
                if(strcmp(jugadores[i].nombre,nombreJugador)==0){
                    buqueda = 1;
                    printf("La edad del jugador es %d y su altura es %.2f\n",jugadores[i].edad,jugadores[i].altura);
                }
            }
            if(buqueda == 0){
                printf("Jugador no encontrado\n");
            }
            break;
        case 3:
            float alturaMayor = jugadores[0].altura;
            char nombreMayorAltura[50];
            int edadMayorAltura = jugadores[0].edad;
            strcpy(nombreMayorAltura,jugadores[0].nombre);
            for(int i=1;i<5;i++){
                if(jugadores[i].altura > alturaMayor){
                    strcpy(nombreMayorAltura,jugadores[i].nombre);
                    edadMayorAltura = jugadores[i].edad;
                    alturaMayor = jugadores[i].altura;
                }
            
            }
            printf("EL nombre del jugadro de mayor altura es %s y su edad es %d\n",nombreMayorAltura,edadMayorAltura);
            break;
        default:
            break;
        }


    }
    

    return 0;
}