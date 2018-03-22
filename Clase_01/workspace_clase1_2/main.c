#include <stdio.h>
#include <stdlib.h>
/**
*
*@param
*@return
*/
int main()
{
    char nombre;
    float sueldo;
    int porcenAumento;
    float aumento;
    float sueldoFinal;

    printf("ingrese su nombre \n");
    scanf("%c",&nombre);
    printf("ingrese su sueldo \n");
    scanf("%f",&sueldo);
    printf("ingrese el porcentaje de aumento \n");
    scanf("%d",&porcenAumento);
    aumento=(porcenAumento*sueldo)/100;

    sueldoFinal=sueldo+aumento;

    printf("aumento del: %.0f",aumento);



    printf("su nombre es: %c, su seldo es: %.0f, su aumento es del %d %%, su sueldo final: %.0f",nombre,sueldo,porcenAumento,sueldoFinal);
    return 0;
}
