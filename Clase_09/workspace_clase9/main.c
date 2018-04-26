#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "estructuras.h"
#include "localidad.h"
#define TAMANIO 3

int main()
{
    /**estructuraEjemplo miEstructura;
    printf("------%s",miEstructura.nombre);
    eLocalidad localidad;
    localidad.estado=1;
    localidad.id=555;
    strcpy(localidad.nombreLocalidad,"maria");
    ///printf("%c",localidad.nombreLocalidad);
    loc_mostrarUno(localidad);*/
    eEmpleado listadoLocalidad[TAMANIO];
    eEmpleado listado[TAMANIO];

    int i;
    for( i=0;i<TAMANIO;i++)
    {

        listadoLocalidad[i].id=emp_Alta(listado,TAMANIO);
        //listadoLocalidad[i].estado=1;
        strcpy(listadoLocalidad[i].nombreEmpleado,"maria");
    }
    emp_mostrarListado(listadoLocalidad,TAMANIO);
    return 0;
}
