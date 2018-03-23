#include <stdio.h>
#include <stdlib.h>
/*se ingresan numeros (validar se distintos de 0) , no se sabe cuantos,
se pide mostrar:
    *cantidad de pares e impares.
    *porcentaje de numeros positivos y negativos.
    *maximo y minimo.
    *maximo numero par.
    *cantidad de numeros comprendidos entres 125 y 236.
*/
int main()
{
    int totalNumenros = 0;
    char respuesta;
    int numero;
    int par = 0;
    int impar = 0;
    int pos = 0;
    int neg = 0;
    float porcenPos;
    float porcenNeg;
    int max;
    int min;
    int flag = 0;
    int parMax;
    int flagPar = 0;

    do
    {
        printf("\ningrese un numero: \n");
        scanf(" %d", &numero);

        while (numero==0)
        {
            printf("\ningrese un numero valido: \n");
            scanf(" %d", &numero);
        }

        printf("\ningrese y/n para detener o continuar el proceso: ");

        if (numero%2==0 && numero!=0)
        {
            par++;
            if (flagPar==0 || numero>parMax)
            {
                parMax=numero;
            }
        }
        else if (numero%2!=0 && numero!=0)
        {
            impar++;
        }

        if (numero>0)
        {
            pos++;
        }else
        {
            neg++;
        }

        if(flag==0 || numero>max)
        {
            max=numero;
        }
        if (flag==0 || numero<min)
        {
            min=numero;
            flag=1;
        }
        /*if(flag==0)
        {
            max=numero;
            min=numero;
            flag=1;
        }
        else
        {
            if(numero>max)
            {
                max=numero;
            }
            if(numero<min)
            {
                min=numero;
            }
        }*/

        if (flag==0 && numero%2==0)
        {

        }
        if (numero>parMax && numero%2==0)
        {
            parMax=numero;
        }

        respuesta = getche();
    }while (respuesta != 'n');

    totalNumenros=pos+neg;

    porcenPos=(float)(pos*100)/totalNumenros;
    porcenNeg=100-porcenPos;

    printf("\nla cantidad de numeros ingresados es: %d, \nla cantidad de numeros pares es %d, \nla cantidad de impares es %d, \nel porcentaje de positivos es del: %f %%, \nel porcentaje de negativos es del: %f %%, \nel numero maximo es el: %d, \nel numero minimo es el: %d, \nel numero par maximo es el: %d", totalNumenros, par, impar,porcenPos,porcenNeg,max,min,parMax);

    /*int n;
    char l;

    printf("ingrese un numero: ");
    scanf("%d", &n);

    printf("ingrese un caracter: ");
    l = getch();
    //scanf(" %c", &l);

    printf("%d--%c", n, l);

    printf("Hello world!\n");*/
    return 0;
}
