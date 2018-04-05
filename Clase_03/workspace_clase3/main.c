#include <stdio.h>
#include <stdlib.h>

/**
*void saludar(void);//firma prototipo
*/

///int sumar(int numeroUno,int numeroDos);
float dividirEnteros(int numeroUno,int numeroDos);

int main()
{
    /**reglas del main:
    *1)  definir el prototipo
    *3)  definir la funcionalidad
    *2)  invocar a la funcion
    */
    /**int numero;
    *numero=sumar(3,3);
    *printf("el resultado es %d",numero);
    */
    ///saludar();
    float numero;
    numero=dividirEnteros(10,3);
    printf("el resultado es %f",numero);
    return 0;
}
float dividirEnteros(int numeroUno,int numeroDos)
{
    float resultado=0;
    resultado=(float)numeroUno/numeroDos;
    return resultado;
}
/**int sumar(int numeroUno,int numeroDos)
*{
*    int resultado=0;
*    resultado=numeroUno+numeroDos;
*    return resultado;
*}
*void saludar(void)
*{
*    printf("hola mundo\n");
*}
*/
