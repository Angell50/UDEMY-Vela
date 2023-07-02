#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "persistencia.h"

int main(void){

    int opcion = 0;
    int nEmpleados = 0;
    struct empleado empleados [100];
    
    nEmpleados = cargarEmpleados(empleados);
    printf("BIENVENIDOS AL GESTOR DE EMPLEADOS \n");
    mostrarMenu();
    scanf("%d",&opcion);

    while(opcion != 7){
        if(opcion == 1){
            int creado = alta(empleados,nEmpleados);
            if(creado == 1){
                nEmpleados ++;
            }
        }
        if(opcion == 2){
           int eliminado = baja(empleados,nEmpleados);
           if(eliminado == 1){
            nEmpleados --;
           }
        }
        if(opcion == 3){
           listarEmpleados(empleados,nEmpleados);
        }
        if(opcion == 4){
           consultarDatosEmpleado(empleados,nEmpleados);
        }
        if(opcion == 5){
           modificarSueldo(empleados,nEmpleados);
        }
        if(opcion == 6){
           modificarHoras(empleados,nEmpleados);
        }
        mostrarMenu();
        scanf("%d",&opcion);
    }
    guardarEmpleados(empleados,nEmpleados);
    printf("GRACIAS POR USAR EL GESTOR DE EMPLEADOS.....¡HASTA PRONTO!\n ");
    return 0;
}