#include <stdio.h>

int main(void){

    int valor = 6;
    int numero;
    char a1,b1,c1,d1;
    /*printf("El contenido de la variable valor es: %d \n", valor);
    printf("Ingrese un numero: \n");
    scanf("%d",&numero);
    printf("El numero es: %d\n", numero);*/
    
    printf("Ingrese 4 caracteres:\n");
    scanf("%c %c %c %c",&a1,&b1,&c1,&d1);
    printf("%c-%c%c-%c",a1,b1,c1,d1);

    return 0;
}