void mostrarMenu();
struct empleado{
    char nombre[255];
    int id;
    float sueldo;
    int horas;
};
void listarEmpleados(struct empleado empleados[100],int nEmpleados);
int alta(struct empleado empleados[100],int nEmpleados);
int baja(struct empleado empleados[100],int nEmpleados);
void consultarDatosEmpleado(struct empleado empleados[100],int nEmpleados);
void modificarSueldo(struct empleado empleados[100],int nEmpleados);
void modificarHoras(struct empleado empleados[100],int nEmpleados);