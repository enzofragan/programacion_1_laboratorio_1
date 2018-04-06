#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/*prototipo uno*/
void sumarUno(void);

/*prototipo dos*/
void sumarDos(int, int);

/*prototipo tres*/
int sumarTres();

/*prototipo cuatro*/
int sumarCuatro(int, int);

int main()
{
    /**int edad;
    int legajo;
    edad=pedirEntero("ingrese edad: ", 18, 60);
    legajo=pedirEntero("ingrese legajo: ",1 ,2000);
    printf("chau");*/
    //sumarUno();
   // sumarDos(4, 9);
   int resultado;
   /*resultado=sumarTres();
   printf("la suma es: %d", resultado);*/
   int numeroUno;
   int numeroDos;
   numeroUno=pedirEntero("ingrese un numero ",1 ,1000);
   numeroDos=pedirEntero("ingrese un numero ",1 ,1000);
   resultado=sumarCuatro(numeroUno,numeroDos);
   printf("la suma es: %d", resultado);
    return 0;
}
/*prototipo uno*/
void sumarUno(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    numeroUno=pedirEntero("ingrese un numero ",1,1000);
    numeroDos=pedirEntero("ingrese un numero ",1,1000);

    suma=numeroUno+numeroDos;

    printf("la suma es: %d", suma);
}

/*prototipo dos*/
void sumarDos(int n1, int n2)
{

    int suma;

    suma= n1 + n2;

    printf("la suma es %d", suma);
}

/*prototipi tres*/
int sumaTres()
{
    int numeroUno;
    int numeroDos;
    int suma;

    numeroUno=pedirEntero("ingrese un numero ",1,1000);
    numeroDos=pedirEntero("ingrese un numero ",1,1000);

    suma=numeroUno+numeroDos;
    return suma;
}

/*prototipo cuatro*/
int sumarCuatro(int n3, int n4)
{
    int suma;

    suma= n3 + n4;

    return suma;
}
