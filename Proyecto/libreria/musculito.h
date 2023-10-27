#ifndef MUSCULITO_H
#define MUSCULITO_H

#include "clientes.h"
#include "clases.h"
#include "musculacion.h"

const sCliente ClienteNulo = { 0 , " ", " ", " ", 0 , {0,0,0}, " "};

enum agrCliente {ErrAgrCliente = -1, ExitoAgrCliente = 1};
typedef agrCliente eAgrCliente;

enum rmCliente   { ErrRmNomApe = -1,   ExitoRemover = 1 };
typedef rmCliente eRmCliente;

enum estado {Deuda = -1, alDia = 0 , aFavor = 1};
typedef estado eEstado;

typedef struct
{
    u_int idCurso;
    time_t fechaInscripcion;
} sInscripcion;

typedef struct
{
    u_int idCliente, cantInscriptos;
    sInscripcion* CursosInscriptos;
} sAsistencia;

/*OTRAS FUNCIONES*/


/*FUNCIONES DE CLIENTES*/
sCliente BuscarCliente(sCliente *misClientes, sCliente ClienteBuscado);
eAgrCliente agregarCliente (sCliente *misClientes, sCliente ClienteNuevo);
eRmCliente removerCliente (sCliente *misClientes, sCliente ClienteEliminado);
eEstado estadoCuota (sCliente *misClientes, sCliente ClienteBuscado);
int cantClientes (sCliente *misClientes);









#endif // MUSCULITO_H
