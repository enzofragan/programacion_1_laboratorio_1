#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanio 10

int buscarInt(int [],int ,int );

int main()
{
    int vectorInt[tamanio]={1,2,3,4,5};
    char vectorString[tamanio][30]={"juan","ana","maria","pedro","luia"};
    float vectorFloat[tamanio]={5.3,2.2,6.9,4.1,2.21};
    char aux[30];
    int auxi;
    float auxil;
    int i;
    int j;

    auxi = buscarInt(vectorInt, tamanio, 3);///mostrar el entero buscado

    printf("indice: %d",auxi);

    for(i=0;i<tamanio-1;i++)///ordenar vectores
    {
        for(j=i+1;j<tamanio;j++)
        {
            if(strcmp(vectorString[i],vectorString[j])>0)
            {
                strcpy(aux,vectorString[i]);
                strcpy(vectorString[i],vectorString[j]);
                strcpy(vectorString[j],aux);

                auxi= vectorInt[i];
                vectorInt[i]=vectorInt[j];
                vectorInt[j]=auxi;

                auxil=vectorFloat[i];
                vectorFloat[i]=vectorFloat[j];
                vectorFloat[j]=auxil;
            }
        }
    }

    for(i=0; i<tamanio;i++)///mostrar solo los que tengan informacion.
    {
        if(vectorInt[i]!=0)
        {
            printf("%d -- %s --%f\n",vectorInt[i],vectorString[i],vectorFloat[i]);
        }
    }

    auxi = buscarInt(vectorInt, tamanio, 3);

    if(auxi!=-1)
    {
        printf("\n %s\n",vectorString[auxi]);
    }
    else
    {
        printf("legajo no existente");
    }


    return 0;
}

int buscarInt(int enteros[],int tam,int cual)
{
    int indice=-1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(enteros[i]=cual)
        {
            indice=i;
            break;///para que no busque mas
        }
    }
    return indice;
}
