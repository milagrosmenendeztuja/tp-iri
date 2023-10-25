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

enum estado {Deuda = -1};
typedef estado estadoCuota;

struct musculito
{
 sCliente *misClientes;  //personas en el sistema
 sMusculacion *Modulos;
 sClases *Clases;
 u_int CantMaxima = 1950; //maximo de clientes (1935)
 u_int CantClientes; //contador de clientes al dia de la fecha
}; typedef struct musculito sMusculito;

/*OTRAS FUNCIONES*/
bool hayEspacio(sMusculito* misClientes);

/*FUNCIONES DE CLIENTES*/
sCliente BuscarCliente(sMusculito *gymMusculito, sCliente ClienteBuscado);
eAgrCliente agregarCliente (sMusculito *gymMusculito, sCliente ClienteNuevo);
eRmCliente removerCliente (sMusculito * gymMusculito, sCliente ClienteEliminado);







#endif // MUSCULITO_H
