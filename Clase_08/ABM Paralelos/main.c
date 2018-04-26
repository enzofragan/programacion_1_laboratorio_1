#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 2


int main()
{
    int legajo[TAM]={};
    char nombre[TAM][20]={};
    int nota1[TAM]={};
    int nota2[TAM]={};
    float promedio[TAM]={};
    int opcion;
    int index;
    int i;
    int j;
    int auxNombre[20];
    int auxNotas1;
    int auxNotas2;
    int flag;
    int libre;
    int reIngre;
    int eliminar;
    do
    {
        printf("1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4.BAJA\n5.ORDENAR (por nombre)\n9. SALIR\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            index=cargarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
            if(index == -1)
            {
                printf("No hay lugar\n");
            }
            else
            {
                printf("Alumno ingresado\n");
            }
            break;

        case 2:
        mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
        break;

        case 3:
        printf("ingrese el legajo: ");
        scanf("%d",&flag);
        libre=buscarLegajo(legajo,flag,TAM);
        for(int i=0;i<TAM;i++)
        {
            if(libre != -1)
            {
                reIngre=modificarAlumnos(legajo,nombre,nota1,nota2,promedio,flag,TAM);
            }
        }

        break;

        case 4:
            printf("ingrese el legajo: ");
            scanf("%d",&flag);
            libre=buscarLegajo(legajo,flag,TAM);
            for(int i=0;i<TAM;i++)
            {
                if(libre != -1)
                {
                    eliminar=borrarAlumnos(legajo,nombre,nota1,nota2,promedio,flag,TAM);
                }
            }
            break;

        case 5:

           for(i=0;i<TAM-1;i++)
           {
               for(j=i+1;j<TAM;j++)
               {
                   if(strcmp(nombre[i],nombre[j])>0)
                   {
                       strcpy(auxNombre,nombre[i]);
                       strcpy(nombre[i],nombre[j]);
                       strcpy(nombre[j],auxNombre);

                       auxNotas1=nota1[i];
                       nota1[i]=nota1[j];
                       nota1[j]=auxNotas1;

                       auxNotas2=nota2[i];
                       nota2[i]=nota2[j];
                       nota2[j]=auxNotas2;
                   }
               }
           }
            mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
            break;
        }

    }
    while(opcion!=9);




    return 0;
}

