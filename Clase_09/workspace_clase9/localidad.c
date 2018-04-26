#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "localidad.h"

void emp_mostrarUno(eEmpleado aux)
{
    printf("\nid: %d, nombre: %s",aux.id,aux.nombreEmpleado);
}

void emp_mostrarListado(eEmpleado listado[],int largo)
{
    int i;
    for(i=0;i<largo;i++)
    {
        ///printf("\n%s",listado[i].nombreLocalidad);
        emp_mostrarUno(listado[i]);
    }
}
int emp_Alta(eEmpleado listado[],int largo)
{
    int index;
    index=buscar(listado,largo);
    if(index!=-1)
    {
        printf("ingrese el id: \n");
        scanf("%d",&listado[index].id);
        listado[index].estado=index;
    }
}
int buscar(eEmpleado listado[], int largo)
{
    int index=-1;
    int i;

    for(i=0;i<largo;i++)
    {
        if(listado[i].id==0)
        {
            index=i;
        }
    }


    return index;
}
