#include <stdio.h>

int main(void){
    char cadena[50];
    char caracter;
    int posicion=-1,i=0;

    printf("Ingresar un texto \n");
    gets(cadena);
    printf("Ingresar un caracter \n");
    caracter = getchar();

    /*for(int i=0;i<50;i++ ){
        if(cadena[i] == caracter){
            posicion = i;
        }
    }*/

    while(cadena[i] != '\0' && posicion == -1){
        if(cadena[i] == caracter){
            posicion = i;
        }
        i++;
    }
    if(posicion != -1){
        printf("El caracter %c se encuentra en la posicion: %d",caracter,posicion);
    }else{
        printf("El caracter %c no se encuentra en la cadena: %s",caracter,cadena);
    }
    
    return 0;
}