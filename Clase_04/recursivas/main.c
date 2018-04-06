#include <stdio.h>
#include <stdlib.h>

/** \brief calcula el factorial de un numero
 *
 * \param un numero
 * \return el factorial del numero como parametro
 *
 */


int factorial(int);

int main()
{
    /*int numero=5;
    int i;
    int factor=1;

    for(i=numero; i>=1; i--)
    {
        factor=factor*i;
    }

    printf("el factoria es: %d", factor);
    */
    int numero=0;
    int factor;

    factor=factorial(numero);
    printf("el factorial es: %d", factor);

    return 0;
}

int factorial(int numero)
{
    int respuesta;
    if(numero==0)
    {
        respuesta = 1;
    }
    else
    {
        respuesta=numero * factorial(numero-1);
    }

    return respuesta;
}
