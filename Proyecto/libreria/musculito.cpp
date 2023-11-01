#include "musculito.h"

eBusCliente BuscarCliente(sCliente *misClientes, sCliente ClienteBuscado)
{
    for(int i=0; i< sizeof(misClientes);i++){
        if (((misClientes[i].nombre == ClienteBuscado.nombre) &&  (misClientes[i].apellido==ClienteBuscado.apellido)) || (misClientes[i].email == ClienteBuscado.email))
        {
            return eBusCliente::ExisteCliente;
        }
        if (i==sizeof(misClientes))
            break;

        return eBusCliente::NoExisteCliente;
        }
}

int idCliente(sCliente *misClientes, sCliente ClienteBuscado)
{
        int BusquedaCliente = BuscarCliente(misClientes, ClienteBuscado);
        if (BusquedaCliente == ExisteCliente)
        {
            for(int i=0; i< sizeof(misClientes);i++)
            {
                if (((misClientes[i].nombre == ClienteBuscado.nombre) &&  (misClientes[i].apellido==ClienteBuscado.apellido)) || (misClientes[i].email == ClienteBuscado.email))
            {
                return misClientes[i].idCliente;
            }
            }
        }
        if (BusquedaCliente == NoExisteCliente)
        {
            return 0;
        }
}

//enum agrCliente {ErrAgrCliente = -1, ExitoAgrCliente = 1};
//typedef agrCliente eAgrCliente;

/*eAgrCliente inscribirCliente (sCliente*misClientes, sCliente ClienteNuevo)
{
        ClienteNuevo = misClientes [sizeof(misclientes)+1];
        returno eAgrCliente::ExitoAgrCliente;

}*/

eEstado estadoCuota (sCliente *misClientes, int IdClienteBuscado)
{
        int posicion;

        for(int i=0; i< sizeof(misClientes);i++)
        {
            if(misClientes[i].idCliente == IdClienteBuscado)
            {
             posicion=i;
            }
        }
     if(misClientes[posicion].estado == 0)
        {
            return eEstado::alDia;
        }
     if(misClientes[posicion].estado < 0)
     {
            return eEstado::Deuda;
     }
     if(misClientes[posicion].estado > 0)
     {
            return eEstado::aFavor;
     }
}

float verificarClase (sClases *misClases, sClases ClaseBuscada)
{
     int posicion;
     for(int i=0; i<sizeof(misClases); i++)
     {
            if(misClases[i].nombre == ClaseBuscada.nombre && misClases[i].horario == ClaseBuscada.horario)
            {
             posicion = i;
             return misClases[posicion].idClase;
            }
     }
     return -1;
}














/*eRmCliente removerCliente (sCliente *misClientes, sCliente ClienteEliminado)
{
    sCliente *auxiliar = misClientes;
    sCliente *ultimo = (gymMusculito -> misClientes) + gymMusculito -> CantClientes - 1;
    while(true)
    {
        if ((auxiliar->nombre == ClienteEliminado.nombre && auxiliar->apellido == ClienteEliminado.apellido))
        {
            *auxiliar = ClienteNulo;
            return eRmCliente::ExitoRemover;
        }
        if (auxiliar==ultimo)
        {
            break;
        }
        auxiliar++;
    }
    return eRmCliente::ErrRmNomApe;
}*/

/*eAgrCliente agregarCliente (sMusculito *gymMusculito, sCliente ClienteNuevo)
{
    if(!hayEspacio (gymMusculito))
        return eAgrCliente::ErrAgrCliente;

    gymMusculito->CantClientes++;
    ClienteNuevo = gymMusculito->misClientes [gymMusculito->CantClientes-1];

    return eAgrCliente ::ExitoAgrCliente;
}*/
/*
int cantClientes (sCliente *misClientes)
{

}

eEstado estadoCuota (sCliente *misClientes, sCliente ClienteBuscado)
{

}
*/
