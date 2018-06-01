#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[50];
}ePersona;

int setId(ePersona*,int);
int setNombre(ePersona*,char*);
int getId(ePersona*);
char* getNombre(ePersona*);

int main()
{
    ePersona miPersona;
    ePersona* pPersona=NULL;
    /*printf("%p\n",pPersona);
    pPersona = (ePersona*) malloc(sizeof(ePersona));
    printf("%p\n",pPersona);*/
    pPersona = malloc(sizeof(ePersona));

    if(pPersona!=NULL)
    {
        if(setId(pPersona,45)==-1)
        {
            printf("error");
        }
        else
        {
            if(setNombre(pPersona,"juan")==-1)
            {
                printf("error");
            }
            else
            {
                printf("%d---%s",getId(pPersona),getNombre(pPersona));
            }
        }
    }
    return 0;
}

int setId(ePersona* this,int id)
{
    int ret=-1;
    if(id>0 && this!=NULL)
    {
        ret=0;
        this->id=id;
    }
    return ret;
}
int setNombre(ePersona* this,char* nombre)
{
    int ret=-1;
    if(nombre!=NULL && strlen(nombre)>3 && this!=NULL)
    {
        ret=0;
        strcpy(this->nombre,nombre);
    }
    return ret;
}

int getId(ePersona* this)
{
    int ret=-1;
    if(this!=NULL)
    {
        ret = this->id;
    }
    return ret;
}

char* getNombre(ePersona* this)
{
    char* ret= NULL;
    if(this!=NULL)
    {
        ret = this->nombre;
    }
    return ret;
}
