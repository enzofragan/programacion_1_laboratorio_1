#include "funciones.h"
#include <stdio.h>
int pedirEntero(char mensaje(), int min, int max)
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    while(numero<min ||numero>max)
    {
        printf("Error, ingrese un numero valido %s", mensaje);
        scanf("%d", &numero);
    }
    return numero;
}
