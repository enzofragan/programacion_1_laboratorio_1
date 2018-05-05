#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"
#define CantUsuarios 3
#define CantProductos 3

int eUso_inicio(eUsuario listado[],int limite)///inicia los valores
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
    if(limiteUso>0)///mientras la lista inicie
    {
        retornar=-2;
        for(i=0;i<limiteUso;i++)/// y no sobre pase la cantidad
        {
            if(listaUso[i].estado==1)///encontrar un lugar libre
            {
                retornar=i;
                //printf("-----%d-----\n",retornar);
                break;
            }
        }
    }
    return retornar;
}

int eUso_sigId(eUsuario lista[],int limite)///id auto incrementable
{
    int retorno = 0;
    int i;
    if(limite > 0 && lista != NULL)///mientrar el limite sea myor a 0 y haya algo
    {
        for(i=0; i<limite; i++)
        {
            if(lista[i].estado == 0)///si el anterior esta ocupado
            {
                    if(lista[i].idUsuario>retorno)///y esa id sea mayor al retorno
                    {
                         retorno=lista[i].idUsuario;///devuelve esa id
                    }

            }
        }
    }

    return retorno+1;///y retorna el lugar siguiente
}

int eUso_busqueda(eUsuario lista[],int limite)///busca el usuario para la baja o modificacion
{
    int id;
    char nombre[50];
    int contra;
    int indice=-1;
    int i;
    char buff[50];

    printf("ingrese el id del usuario: ");
    fflush(stdin);
    gets(buff);///pide el numero com char
    while(esNumero(buff)==0)///valida si es numero o no
    {
        printf("ingrese un id valido: ");
        fflush(stdin);
        gets(buff);
    }
    id = atoi(buff);///los combierte a numero (atoi)
    printf("ingrese el nombre del usuario: ");
    fflush(stdin);
    gets(nombre);///pide el nombre
    while(esLetra(nombre)==0)///valida si es solo string
    {
        printf("ingrese un nombre valido: ");
        fflush(stdin);
        gets(nombre);
    }
    printf("ingrese la contraseña del usuario: ");///extra: pide contraseña
    fflush(stdin);
    scanf("%d",&contra);

    for (i=0;i<limite;i++)
    {
        if(id==lista[i].idUsuario && strcmp(nombre,lista[i].nombre)==0 && contra==lista[i].contrase)///si son iguales lo encontro
        {
            indice=id;///de vuelve el id encontrado
            break;
        }
        else
        {
            indice=-2;
        }
    }
    return indice;
}

int eUSo_mostrarSolo(eUsuario parametro)///muestra el usuario guardado
{
    printf("%d---%s\n",parametro.idUsuario,parametro.nombre);
}

int eUSo_mostrarLista(eUsuario listado[],int cantidad)///mostra la lista de usuario
{
    int retorno = -1;
    int i;
    if(cantidad > 0 && listado != NULL)///si no obrepara el limite y halla algo en la lista
    {
        retorno = 0;

        for(i=0; i<cantidad; i++)
        {
            if(listado[i].estado==0)///si esta coupado lo muestra
            {
                eUSo_mostrarSolo(listado[i]);
            }
        }
    }
    return retorno;
}

int eUso_alta(eUsuario listaUso[],int limite)///pide un nuevo usuario
{
    int retornar=-1;
    int i;
    int id;
    if(limite>0 && listaUso != NULL)
    {
        retornar=-2;
        i=eUso_libreUso(listaUso,limite);///si encuentra un lugar libre
        if(i>=0)
        {
            id=eUso_sigId(listaUso,limite);///pasa al id del siguiente al original
            printf("ingrese el nombre del usuario: ");///pider el nombre y valida
            fflush(stdin);
            gets(listaUso[i].nombre);
            while(esLetra(listaUso[i].nombre)==0)
            {
                printf("ingrese un nombre valido: ");
                fflush(stdin);
                gets(listaUso[i].nombre);
            }
            printf("ingrese contraseña: ");///pide contraseña
            fflush(stdin);
            scanf("%d",&listaUso[i].contrase);
            listaUso[i].idUsuario=id;///la id que se guarda es la que devuelve la funcion anterio
            listaUso[i].estado=0;///cambiar el estado a ocupado
            retornar=0;
        }

    }
    return retornar;
}
int eUso_baja(eUsuario lista[],int limite)///pide se desea dar de baja un usuario
{
    int busquedaB;
    char respuesta;
    int indice=0;
    int i;

    busquedaB=eUso_busqueda(lista,limite);///busca el usuario

    for(i=0;i<limite;i++)
    {
        if(busquedaB>=0 && lista[i].idUsuario==busquedaB)///si esta y el id es el mismo que el original
        {
            eUSo_mostrarSolo(lista[i]);///muestra el usuario
            printf("dara de baja a este usuario? s/n: ");///pregunta si lo dara de baja
            fflush(stdin);
            respuesta=getche();
            while(respuesta!='s' && respuesta!='n')///si no es ni si ni no
            {
                printf("\ningrese un valor valido s/n: ");
                fflush(stdin);
                respuesta=getche();
            }
            if(respuesta=='s')///si es si devuelve es valor al inicio
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

int eUso_modificacion(eUsuario lista[],int limite)
{
    int busquedaM;
    char respuesta;
    char respuestaM;
    char auxNombre[50];
    int auxContra;
    int indice=0;
    int i;

    busquedaM=eUso_busqueda(lista,limite);///busca el usuario

    for(i=0;i<limite;i++)
    {
        if(busquedaM>=0 && lista[i].idUsuario==busquedaM)///si esta y el id es el mismo que el original
        {
            eUSo_mostrarSolo(lista[i]);///muestra el usuario

            printf("desea modificar a este usuario? s/n: ");///pregunta si lo modificara
            fflush(stdin);
            respuesta=getche();

            while(respuesta!='s' && respuesta!='n')///si no es ni si ni no
            {
                printf("\ningrese un valor valido s/n: ");
                fflush(stdin);
                respuesta=getche();
            }

            if(respuesta=='s')///si es si
            {
                printf("\ningrese el nuevo nombre del usuario: ");///
                fflush(stdin);
                gets(auxNombre);
                while(esLetra(auxNombre)==0)
                {
                    printf("\ingrese un nombre valido: ");
                    fflush(stdin);
                    gets(auxNombre);
                }
                printf("\ingrese la nueva contraseña: ");///
                fflush(stdin);
                scanf("%d",&auxContra);

                printf("\nel nuevo nombre es: %s\ny el la nueva contraseña es: %d\n",auxNombre,auxContra);

                printf("\ndesea aplicar estos cambios? s/n: ");///
                fflush(stdin);
                respuestaM=getche();

                while(respuestaM!='s' && respuestaM!='n')///si no es ni si ni no
                {
                    printf("\ningrese un valor valido s/n: ");
                    fflush(stdin);
                    respuestaM=getche();
                }

                if(respuestaM=='s')
                {
                    strcpy(lista[i].nombre,auxNombre);
                    lista[i].contrase=auxContra;
                }
                else if(respuestaM=='n')
                {
                    indice=-2;
                }
            }
            else if(respuesta=='n')
            {
                indice=-1;
            }
        }
    }
    return indice;
}

int esLetra(char nombre[])///valida si es letra
{
    int i=0;
    while(nombre[i] != '\0')///mientras no sea /0 osea alla algo
    {
        if((nombre[i] != ' ') && (nombre[i] < 'a' || nombre[i] > 'z') && (nombre[i] < 'A' || nombre[i] > 'Z'))///si tiene espacio y no esta entre a y z
        {
            return 0;///es numero
        }
        i++;
    }
    return 1;
}

int esNumero(char numero[])///valida si e numeo
{
    int i=0;
    while(numero[i] != '\0')
    {
        if(!(isdigit(numero[i])))///si el char no es un digito
        {
            return 0;///es letra
        }
        i++;
    }
    return 1;
}
