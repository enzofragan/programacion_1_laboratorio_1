#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main()
{
    int* pVector;
    int i;
    int aux;

    pVector=(int*) malloc(sizeof(int)* tam);

    if(pVector!=NULL)
    {
        for(i=0;i<tam;i++)
        {
            *(pVector+i)=i+1;
        }
        for(i=0;i<tam;i++)
        {
            printf("%d\n",*(pVector+i));
        }
        aux=realloc(pVector,sizeof(int)*(tam*2));
        if(aux!=NULL)
        {
            pVector=aux;
        }
    }
    return 0;
}
