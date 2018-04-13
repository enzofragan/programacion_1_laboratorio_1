#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarPares(int [], int);
/** \brief determina si un valor esta o no esta dentro del array
 *
 * \param char [] coleccion de caracteres
 * \param int tamaño de la coleccion
 * \param char caracter a buscar
 * \return int -1 si no lo encuentra o el indice
 *
 */
int buscarInt(char [], int, char);

int main()
{
    char palabra1[15];
    char palabra2[15];
    char buffer[1024];
    int i;
    int cant;
    int comp;

    printf("ingrese una palabra: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>14)
    {
        printf("reingrese una palabra: ");
        fflush(stdin);
        gets(buffer);
    }

    //cant=strlen(palabra1);///cuenta la cantidad de caracteres

    strcpy(palabra1,buffer);///copia lo que dice palabra1 (origen) y lo puso en palabra2 (destino)

    strcpy(palabra2,"gato");

    /*comp=strcmp(palabra1,palabra2);///compara las palabras y devuelve una diferencia
    comp=stricmp(palabra1,palabra2);///lo miso que el de arriba pero no compara mayusculas de minusculas*/
    strupr(palabra1);///pasa todo a mayuscula
    strlwr(palabra2);///pasa todo a miniscula

    strcat(buffer,palabra2);///concatena las palabras
    strcat(buffer,palabra1);

    //printf("cantidad de caracteres de palabra1 %d\n",cant);
    printf("el resultado de la compaparacion: %d\n",comp);
    printf("palabra %s\npalabra %s--- buffer %s",palabra1,palabra2,buffer);
   /* int vector[5]={'a','h','e','g','ñ'};
    int auxiliar;
    int i;
    int j;

    for (i=0;i<4;i++)///mano amarilla
    {
        for(j=i+1;j<5;j++)///mano celeste
        {
            if(vector[i]>vector[j])///menor a mayor o criterio de ordenamiento
            {
                auxiliar=vector[i];
                vector[i]=vector[j];
                vector[j]=auxiliar;
            }
        }
    }

    for(i=0; i<5;i++)
    {
        printf("%d\n",vector[i]);
    }
*/
    /*int a = 9;
    int b = 5;
    int c;

    //swap
    c = a;
    a = b;
    b = c;

    printf("a = %d -- b = %d",a,b);*/
   /* char letras[5] = {'f','g','a','m','q'};
    int indexLetra;
    int cantidad;

    cantidad=contarPares(vector, 5);

    indexLetra=buscarInt(letras, 5, 'a');
    if(indexLetra==-1)
    {
        printf("no se encontro el caracte!!!\n");
    }
    else
    {
        printf("el caracter se encuentra en el array\n");
    }

    printf("index=%d\n",indexLetra);
    printf("cantidad de pares: %d", cantidad);*/
    return 0;
}

int contarPares(int array[], int cantidad)
{
    int contadorPares = 0;
    int i;

    for(i=0;i < cantidad;i++)
    {
        if(array[i]%2==0)
        {
            contadorPares++;
        }
    }

    return contadorPares;
}

int buscarInt(char array [], int cantidad, char caracter)
{
  int index = -1;
  int i;
  for(i=0;i<cantidad; i++)
  {
      if(array[i]==caracter)
      {
          index = i;
          break;
      }
  }
  return index;
}
