#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#define CantUsuarios 3
#define CantProductos 3

int eUso_inicio(eUsuario listado[],int limite)
{
    int retorno=-1;
    int i;
    if(limite>0)
    {
        retorno=0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= 1;
            listado[i].idUsuario=0;
            strcpy(listado[i].nombre,"");
        }
    }
    return retorno;
}

int eUso_libreUso(eUsuario listaUso[], int limiteUso)
{
    int retornar=-1;
    int i;
    if(limiteUso>0)
    {
        retornar=-2;
        for(i=0;i<limiteUso;i++)
        {
            if(listaUso[i].estado==1)
            {
                retornar=i;
                //printf("-----%d-----\n",retornar);
                break;
            }
        }
    }
    return retornar;
}

int eUSo_mostrarSolo(eUsuario parametro)
{
    printf("%d---%s\n",parametro.idUsuario,parametro.nombre);
}

int eUSo_mostrarLista(eUsuario listado[],int cantidad)
{
    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)
    {
        retorno = 0;

        for(i=0; i<cantidad; i++)
        {
            if(listado[i].estado==0)
            {
                eUSo_mostrarSolo(listado[i]);
            }
        }
    }
    return retorno;
}

int eUso_alta(eUsuario listaUso[],int limite)
{
    int retornar=-1;
    int i;
    if(limite>0 && listaUso != NULL)
    {
        retornar=-2;
        i=eUso_libreUso(listaUso,limite);
        if(i>=0)
        {
            printf("ingrese el id del usuario: ");
            fflush(stdin);
            scanf("%d",&listaUso[i].idUsuario);
            printf("ingrese el nombre del usuario: ");
            fflush(stdin);
            gets(listaUso[i].nombre);
            listaUso[i].estado=0;
            retornar=0;
        }

    }
    return retornar;
}
