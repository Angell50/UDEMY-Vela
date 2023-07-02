#include <stdio.h>
#include <string.h>

int main(void){
    
    struct estudiante
    {   
        int edad;
        float altura;
        char cedula[10];
    };

    struct estudiante cursoA[2];
    
    for (int i=0;i<2;i++){
        printf("Ingrese la edad del estudiante\n");
        scanf("%d",&cursoA[i].edad);
        printf("Ingrese la altura del estudiante\n");
        scanf("%f",&cursoA[i].altura);
        printf("Ingrece el numero de cedula del estudiante\n");
        scanf("%s",&cursoA[i].cedula);

        fflush(stdin);    
    }

    for (int i=0;i<2;i++){
        printf("El estudiante con cedula %s, tiene %d anos y mide %.2f\n",cursoA[i].cedula,cursoA[i].edad,cursoA[i].altura);
    }


    

    return 0;
}