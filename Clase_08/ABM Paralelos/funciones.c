#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int buscarLibre(int legajos[], int tam)
{
    int index=-1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(legajos[i]==0)
        {
            index=i;
        }
    }


    return index;
}

int cargarAlumno(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int index ;
    index = buscarLibre(legajos, tam);
            if(index!=-1)
            {
                printf("ingrese el legajo: \n");
                fflush(stdin);
                scanf("%d",&legajos[index]);///pedir numeros
                printf("ingrese el nombre: \n");
                fflush(stdin);
                gets(nombres[index]);///pedir nombres
                printf("ingrese la primera nota: \n");
                fflush(stdin);
                scanf("%d",&nota1[index]);
                printf("ingrese la segunda nota: \n");
                fflush(stdin);
                scanf("%d",&nota2[index]);
                promedio[index]=calcularPromedio(nota1[index],nota2[index]);
                //Pedir datos
            }
            return index;
}


float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio = (float)(nota1+nota2)/2;
    return promedio;
}

void mostrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
            {
                if(legajos[i]!=0)
                {
                    printf("%d %s %d %d %.2f\n", legajos[i], nombres[i], nota1[i], nota2[i], promedio[i] );
                }

            }

}
int buscarLegajo(int legajos[],int buscardo,int tam)
{
    int indice = -1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(legajos[i]==buscardo)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

int modificarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[],float promedios[],int buscado, int tam)
{
    int libres;
    char rta;

    libres=buscarLegajo(legajos,buscado,tam);

    while(rta!='n')
    {


    if(libres!=-1)
    {
        printf("ingrese el nombre: \n");
        fflush(stdin);
        gets(nombres[libres]);
        printf("ingrese la primera nota: \n");
        fflush(stdin);
        scanf("%d",&nota1[libres]);
        printf("ingrese la segunda nota: \n");
        fflush(stdin);
        scanf("%d",&nota2[libres]);
        promedios[libres]=calcularPromedio(nota1[libres],nota2[libres]);
    }


    printf("desea continuar? s/n: ");
    fflush(stdin);
    scanf("%c",&rta);

    }

    return libres;
}

int borrarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[],float promedios[],int buscado, int tam)
{
    int libres;
    char rta;

    libres=buscarLegajo(legajos,buscado,tam);

    while(rta!='n')
    {
        if(libres!=-1)
        {
           legajos[libres]=0;
           strcpy(nombres[libres],"");
           nota1[libres]=0;
           nota2[libres]=0;
           promedios[libres]=0;
        }
        printf("desea continuar? s/n: ");
        fflush(stdin);
        scanf("%c",&rta);
    }
}
