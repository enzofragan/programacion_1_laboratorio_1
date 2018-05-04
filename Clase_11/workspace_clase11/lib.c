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
            listado[i].contrase=0;
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

int eUso_sigId(eUsuario lista[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && lista != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(lista[i].estado == 0)
            {
                    if(lista[i].idUsuario>retorno)
                    {
                         retorno=lista[i].idUsuario;
                    }

            }
        }
    }

    return retorno+1;
}

int eUso_busqueda(eUsuario lista[],int limite)
{
    int id;
    char nombre[50];
    int contra;
    int indice=-1;
    int i;

    printf("ingrese el id del usuario: ");
    fflush(stdin);
    scanf("%d",&id);
    while(esNumero(lista[i].contrase)==0)
    {
        printf("hoal\n");
    }
    printf("ingrese el nombre del usuario: ");
    fflush(stdin);
    gets(nombre);
    while(esLetra(nombre)==0)
    {
        printf("ingrese un nombre valido: ");
        fflush(stdin);
        gets(nombre);
    }
    printf("ingrese la contraseña del usuario: ");
    fflush(stdin);
    scanf("%d",&contra);

    for (i=0;i<limite;i++)
    {
        if(id==lista[i].idUsuario && strcmp(nombre,lista[i].nombre)==0 && contra==lista[i].contrase)
        {
            indice=id;
            break;
        }
        else
        {
            indice=-2;
        }
    }
    return indice;
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
    int id;
    if(limite>0 && listaUso != NULL)
    {
        retornar=-2;
        i=eUso_libreUso(listaUso,limite);
        if(i>=0)
        {
            id=eUso_sigId(listaUso,limite);
            printf("ingrese el nombre del usuario: ");
            fflush(stdin);
            gets(listaUso[i].nombre);
            while(esLetra(listaUso[i].nombre)==0)
            {
                printf("ingrese un nombre valido: ");
                fflush(stdin);
                gets(listaUso[i].nombre);
            }
            printf("ingrese contraseña: ");
            fflush(stdin);
            scanf("%d",&listaUso[i].contrase);
            listaUso[i].idUsuario=id;
            listaUso[i].estado=0;
            retornar=0;
        }

    }
    return retornar;
}
int eUso_baja(eUsuario lista[],int limite)
{
    int busquedaB;
    char respuesta;
    int indice=0;
    int i;

    busquedaB=eUso_busqueda(lista,limite);

    for(i=0;i<limite;i++)
    {
        if(busquedaB>=0 && lista[i].idUsuario==busquedaB)
        {
            eUSo_mostrarSolo(lista[i]);
            printf("dara de baja a este usuario? s/n: ");
            fflush(stdin);
            respuesta=getche();
            while(respuesta!='s' && respuesta!='n')
            {
                printf("\ningrese un valor valido s/n: ");
                fflush(stdin);
                respuesta=getche();
            }
            if(respuesta=='s')
            {
                lista[i].estado=1;
                lista[i].idUsuario=0;
                lista[i].contrase=0;
                strcpy(lista[i].nombre,"");
            }
            else if(respuesta=='n')
            {
                indice=-1;
            }
        }
    }
    return indice;
}
int esLetra(char nombre[])
{
    int i=0;
    while(nombre[i] != '\0')
    {
        if((nombre[i] != ' ') && (nombre[i] < 'a' || nombre[i] > 'z') && (nombre[i] < 'A' || nombre[i] > 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int esNumero(char numero[])
{
    int i=0;
    while(numero[i] != '\0')
    {
        if(numero[i] < 0 || numero[i] > 9)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
