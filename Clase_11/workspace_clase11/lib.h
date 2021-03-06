#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

typedef struct
{
    char nombre[50];
    int idUsuario;
    int idProducto;
    int precio;
    int stock;
    int cantidad;
    int estado;
}eProducto;

typedef struct
{
    int idUsuario;
    int contrase;
    char nombre[50];
    int estado;

}eUsuario;

typedef struct
{
    int idventa;
    int idProducto;
    int clalificaion;
    int idUsuarioComprador;
    int estado;
}eVenta;

#endif // LIB_H_INCLUDED

int eUso_inicio(eUsuario[],int limite);
int eUso_libreUso(eUsuario listaUso[], int limiteUso);
int eUso_sigId(eUsuario [],int limite);
int eUso_alta(eUsuario[],int limite);
int eUso_baja(eUsuario [],int limite);
int eUso_modificacion(eUsuario [],int limite);
int eUso_entrar(eUsuario [],int limite);
int eUso_busqueda(eUsuario [],int limite);
int eUSo_mostrarSolo(eUsuario parametro);
int eUSo_mostrarLista(eUsuario[],int cantidad);
int esSoloLetras(char []);
int esNumero(char []);
