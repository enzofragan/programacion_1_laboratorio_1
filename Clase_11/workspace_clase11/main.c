#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#define CantUsuarios 10
#define CantProductos 10

int main()
{
    int opcion;
    char seguir;
    int valorUno;
    int valorB;
    int valorM;
    int valorE;
    int respuestaE;
    int string;
    eUsuario listadoDeUsuario[CantUsuarios];
    eUso_inicio(listadoDeUsuario,CantUsuarios);

    do
    {
     printf("1. alta\n2. baja\n3. modificacion\n4. mostrar\n5. entrar al usuario\n6. salir\nElija una opcion: ");
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
           valorE = eUso_entrar(listadoDeUsuario,CantUsuarios);
           if(valorE>0)
           {
                printf("desea entrar a este usuario? s/n: ");///pregunta si entrara
                fflush(stdin);
                respuestaE=getche();

                while(respuestaE!='s' && respuestaE!='n')///valida la recpuesta
                {
                    printf("\ningrese un valor valido s/n: ");
                    fflush(stdin);
                    respuestaE=getche();
                }
                if(respuestaE=='s')
                {
                    system("pause");
                    system("cls");

                }
                else if(respuestaE=='n')
                {
                    printf("\naccion cancelada\n");
                }
           }
            break;

        case 6:
            printf("Desea salir S/N? \n");
            fflush(stdin);
            seguir=getche();
            break;
        }

    }while(seguir!='s');
    return 0;
}
