#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#define CantUsuarios 10
#define CantProductos 10

int main()
{
    int opcion;
    int valor;
    eUsuario listadoDeUsuario[CantUsuarios];
    eUso_inicio(listadoDeUsuario,CantUsuarios);

    do
    {
     printf("1. alta\n2. baja\n3. modificacion\n4.mostrar\nElija una opcion: ");
     scanf("%d",&opcion);


     switch(opcion)
        {
        case 1:
        valor=eUso_alta(listadoDeUsuario,CantUsuarios);
        if(valor>=0)
        {
            printf("ingreso completado");
        }
        else
        {
            printf("contraseña incorrecta");
        }
        break;

        case 2:
            break;

        case 3:
            break;

        case 4:
        eUSo_mostrarLista(listadoDeUsuario,CantUsuarios);
        break;

        case 5:
            break;
        }

    }while(opcion!=11);
    /*eUso_alta(listadoDeUsuario,CantUsuarios);

    eUso_alta(listadoDeUsuario,CantUsuarios);

    eUSo_mostrarLista(listadoDeUsuario,CantUsuarios);*/
    return 0;
}
