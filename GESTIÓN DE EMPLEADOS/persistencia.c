#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operaciones.h"

int cargarEmpleados(struct empleado empleados[100]){
    int nEmpleados = 0;
    FILE *f;
    f = fopen("empleados.txt","r");
    char cadena[255];
    char delimitador[] = ";";

    while(feof(f) == 0 ){
        struct empleado emp;
        fgets(cadena,255,f);
        char *token = strtok(cadena,delimitador);

        if(token != NULL){
            int campo = 1;
            while(token != NULL){
                if(campo == 1){
                    strcpy(emp.nombre,token);
                }
                else if(campo == 2){
                    emp.id = atoi(token);
                }
                else if(campo == 3){
                    emp.sueldo = atof(token);
                }
                else if(campo == 4){
                    emp.horas = atoi(token);
                }
                campo ++;
                token = strtok(NULL,delimitador);
            }
        }
        empleados[nEmpleados] = emp;
        nEmpleados++;
    }
    fclose(f);
    return nEmpleados;
}

void guardarEmpleados(struct empleado empleados[100],int nEmpleados){
    FILE *f;
    f = fopen("empleados.txt","w");

    for(int i=0;i<nEmpleados-1;i++){
        fprintf(f,"%s;%d;%.2f;%d\n",empleados[i].nombre,empleados[i].id,empleados[i].sueldo,empleados[i].horas);

    }   
    fprintf(f,"%s;%d;%.2f;%d",empleados[nEmpleados-1].nombre,empleados[nEmpleados-1].id,empleados[nEmpleados-1].sueldo,empleados[nEmpleados-1].horas);
}