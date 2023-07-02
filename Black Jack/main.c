#include <stdio.h>
#include <stdlib.h>
#include "blackjack.h"

int main(void){
    int opcion;
    menu();
    scanf("%d",&opcion);

    while(opcion != 0){
        if(opcion == 1){
            printf("Jugar partida\n");
        }else if(opcion == 2){
            printf("Cargar partidas\n");
        }
        fflush(stdin);
        menu();
        scanf("%d",&opcion);
    }

    return 0;
}