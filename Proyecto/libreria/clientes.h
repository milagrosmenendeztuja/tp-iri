#ifndef CLIENTES_H
#define CLIENTES_H

#include "encabezados.h"

struct fecha
{
    int dia;
    int mes;
    int anio;
};
typedef struct fecha sFecha;

struct clientes
{
    int idCliente;		 //código único de cada cliente
    char nombre [50];
    char apellido [50];
    char email [200];
    int estado;
    sFecha nac;
    char telefono [15];   //telefono
    // inscripcion* CursosInscriptos;
};
typedef struct clientes sCliente;


#endif // CLIENTES_H
