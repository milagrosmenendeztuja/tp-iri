#ifndef MUSCULITO_H
#define MUSCULITO_H

#include "clientes.h"
#include "clases.h"
#include "musculacion.h"

const sCliente ClienteNulo = { 0 , " ", " ", " ", " ", {0,0,0}, 0};

enum busCliente {ExisteCliente =1, NoExisteCliente =-1};
typedef busCliente eBusCliente;

enum agrCliente {ErrAgrCliente = -1, ExitoAgrCliente = 1};
typedef agrCliente eAgrCliente;

enum estado {Deuda = -1, alDia = 0 , aFavor = 1};
typedef estado eEstado;

enum Superposicion {HaySuperposicion = 1, NoHaySuperposicion = -1};
typedef Superposicion eSuperposicion;

enum Cupos {HayCupos = 1, NoHayCupos = -1};
typedef Cupos eCupos;


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
eBusCliente BuscarCliente(sCliente *misClientes, sCliente ClienteBuscado);
/*eAgrCliente agregarCliente (sCliente *misClientes, sCliente ClienteNuevo);
eRmCliente removerCliente (sCliente *misClientes, sCliente ClienteEliminado);
*/
int idCliente(sCliente *misClientes, sCliente ClienteBuscado);
eAgrCliente inscribirCliente (sCliente*misClientes, sCliente ClienteNuevo);
eEstado estadoCuota (sCliente *misClientes, sCliente ClienteBuscado);
float verificarClase(sClases *misClases, sClases ClaseBuscada);











#endif // MUSCULITO_H
