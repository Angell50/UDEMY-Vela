#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main(void){
    float euros;
    printf("Introduce los euros que quieres convertir\n");
    scanf("%f",&euros);
    printf("%.2f euros son equivalentes a %.2f pesetas",euros,euros*166.3861);
    return 0;
}