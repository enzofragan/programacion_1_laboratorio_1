#ifndef LOCALIDAD_H_INCLUDED
#define LOCALIDAD_H_INCLUDED

typedef struct
{
    int id;
    int estado;
    char nombreEmpleado[50];

}eEmpleado;


#endif // LOCALIDAD_H_INCLUDED
void emp_mostrarUno(eEmpleado aux);
void emp_mostrarListado(eEmpleado listado[],int largo);
int emp_Alta(eEmpleado listado[],int largo);
void emp_Baja(eEmpleado listado[],int largo,int idParaBorrar);
void emp_Modificacion(eEmpleado listado[],int largo,int idParaModificar);
void emp_OrdenarDescPorNombre(eEmpleado listado[],int largo);
void emp_OrdenarDescPorEnteros(eEmpleado listado[],int largo);
int buscar(eEmpleado listado[], int largo);
