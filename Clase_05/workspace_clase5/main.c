#include <stdio.h>
#include <stdlib.h>

int main()
{
    float listadoPrecios[5];
    int indice;
    int i;
    float precioAux;

    //pedir un lugar entre 0 y el maximo del vector
    //indice= dameUnEnteroEntre(0,4);
    //pedir el valor a guardar entre (1,1000);
    //precioAux= dameUnFlotanteEntre(1,1000);
    //guardar el valor

    for(i=0;i<5;i++)
    {
        printf("\n precio: %f",listadoPrecios[i]);
    }

    return 0;
}
