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
    str nombre;
    str apellido;
    str email;
    str telefono;   //telefono
    sFecha fechaNac;
    int estado;

    // inscripcion* CursosInscriptos;
};
typedef struct clientes sCliente;


#endif // CLIENTES_H
