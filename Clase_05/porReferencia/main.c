#include <stdio.h>
#include <stdlib.h>
#define cantidad 5

void cambiarEntero (int numero);
void cambiarVector (int listadoDeNumeros[]);
void cargarVectorConMenosUno(int listado[]);
int main()
{

    int edad=22;
    int enterosEdades[3];
    cambiarEntero(edad);
    cambiarVector(enterosEdades);
    printf(" edad: %d",edad);
    printf("\nedades: %d",enterosEdades[0]);
    //printf("\nlistado de numeros: %d",);
    cargarVectorConMenosUno(listado);
    return 0;
}
void cargarVectorConMenosUno(int listado[])
{
    int i;
    int tamanio=sizeof(listado);
    ///sacar el tamaño
    int tamanioAray=sizeof(cantidad);
    printf("%d",tamanioAray);
    for (i=0;i<tamanio;i++)
    {
        listado[i]=-1;
    }
/** \brief mi no entender nada
 *
 * \param
 * \param
 * \return
 *
 */
}
void cambiarVector (int listadoDeNumeros[])
{
    listadoDeNumeros[0]=666;
}

void cambiarEntero (int numero)
{
    numero=666;
}
