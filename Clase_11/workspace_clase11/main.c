#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#define CantUsuarios 10
#define CantProductos 10

int main()
{
    int opcion;
    int valorUno;
    int valorB;
    int valorM;
    int string;
    eUsuario listadoDeUsuario[CantUsuarios];
    eUso_inicio(listadoDeUsuario,CantUsuarios);

    do
    {
     printf("1. alta\n2. baja\n3. modificacion\n4.mostrar\nElija una opcion: ");
     scanf("%d",&opcion);


     switch(opcion)
        {
        case 1:
        valorUno=eUso_alta(listadoDeUsuario,CantUsuarios);
        if(valorUno>=0)
        {
            printf("\ningreso completado\n");
        }
        else
        {
            printf("\ningreso invalido\n");
        }
        break;

        case 2:
            valorB=eUso_baja(listadoDeUsuario,CantUsuarios);
            if(valorB>=0)
            {
                printf("\nbaja completada\n");
            }
            else
            {
                printf("\naccion cancelada\n");
            }
            break;

        case 3:
            valorM=eUso_modificacion(listadoDeUsuario,CantUsuarios);
            if(valorM>=0)
            {
                printf("\nmodificacion completa\n");
            }
            else
            {
                printf("\naccion cancelada\n");
            }
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
