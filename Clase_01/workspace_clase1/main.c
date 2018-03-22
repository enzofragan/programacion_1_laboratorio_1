#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int max;

    printf("ingrese el numero uno \n");
    scanf("%d",&numeroUno);
    printf("ingrese el numero dos \n");
    scanf("%d",&numeroDos);
    printf("ingrese el numero tres \n");
    scanf("%d",&numeroTres);

    if (numeroUno> numeroDos && numeroUno>numeroTres )
    {
        max=numeroUno;
    }
    else
    {
       if(numeroDos>numeroTres)
       {
           max=numeroDos;
       }else
       {
           max=numeroTres;

       }
    }

    printf("el mayor numero ingresado es %d",max);
    return 0;
}
