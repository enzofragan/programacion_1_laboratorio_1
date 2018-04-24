#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

int buscarLibre(int[], int);
void mostrarAlumnos(int[], char[][20], int[], int[], float[], int);
float calcularPromedio(int, int);
int cargarAlumno(int[], char[][20], int[], int[], float[], int);
void modificarAlumnos(int [], char [][20], int [], int [],float [], int);

int main()
{
    int legajo[TAM]={1234,5678};
    char nombre[TAM][20]={"enzo","annie"};
    int nota1[TAM]={10,5};
    int nota2[TAM]={2,5};
    float promedio[TAM]={};
    int opcion;
    int index;
    int i;
    int j;
    int aux;
    int auxNotas;
    int auxNotas2;
    int flag;
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
            printf("Modificar\n");
                int i;
                for(i=0;i<TAM;i++)
                {
                    modificarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
                }
                if(flag==0)
                {
                    printf("\nNo se encontro el id");
                }
        break;

        case 4:
            break;

        case 5:
            for(i=0;i<TAM-1;i++)
            {
                for(j=i+1;j<TAM;j++)
                {
                    if(strcmp(nombre[i],nombre[j])>0)
                    {
                        strcpy(aux,nombre[i]);
                        strcpy(nombre[i],nombre[j]);
                        strcpy(nombre[j],aux);

                        auxNotas= nota1[i];
                        nota1[i]=nota1[j];
                        nota1[j]=auxNotas;

                        auxNotas2=nota2[i];
                        nota2[i]=nota2[j];
                        nota2[j]=auxNotas2;
                    }
                }
            }
            break;
        }

    }
    while(opcion!=9);




    return 0;
}

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

void modificarAlumnos(int legajos[], char nombres[][20], int nota1[], int nota2[],float promedio[], int tam)
{
    int flag=0;
    char auxInt;
    char rta;

        mostrarAlumnos(legajos,nombres,nota1,nota2,promedio,tam);
        printf("Ingresar el legajo: ");
        scanf("%d", legajos);

        if(legajos[i]==legajos)
        {

            printf("\nIngresar nombre: ");
            fflush(stdin);
            gets(auxInt)

            printf("\n¿Desea realizar la modificacion?");
            scanf("%c",rta);

            if(rta=='s')
            {
                nombres=auxInt;

            }
            else
            {
                printf("\nAccion cancelada");
            }
            flag=1;
        }
}
