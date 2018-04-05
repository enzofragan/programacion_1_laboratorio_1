#include <stdio.h>
#include <stdlib.h>

/**
*void saludar(void);//firma prototipo
*/

///int sumar(int numeroUno,int numeroDos);
///float dividirEnteros(int numeroUno,int numeroDos);
int getEntero(char* mensaje, char* mensajeError, int minimo,int maximo);

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
    /***float numero;
    *numero=dividirEnteros(10,3);
    *printf("el resultado es %f",numero);
    */
    int numero;
    numero=getEntero("Ingrese su edad","Error, debe ser entre 1 y 199",1,199);
    printf("en entero ingresado es : %d" ,numero);
}
int getEntero(char* mensaje, char* mensajeError, int minimo,int maximo){

    int retorno=-1;
    do{
        printf("%s :",mensaje);
        scanf("%d",&retorno);
        if(retorno<maximo && retorno>minimo)
        {
            break;
        }
        printf("%s  \n",mensajeError);
    }while(0);

    return retorno;


}

/**float dividirEnteros(int numeroUno,int numeroDos)
*{
*    float resultado=0;
*    resultado=(float)numeroUno/numeroDos;
*    return resultado;
*}
*int sumar(int numeroUno,int numeroDos)
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
