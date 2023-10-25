#include "musculito.h"

bool hayEspacio(sMusculito * gymMusculito)
{
    return (gymMusculito -> CantMaxima - gymMusculito -> CantClientes > 0);
}

sCliente BuscarCliente(sMusculito *gymMusculito, sCliente ClienteBuscado)
{
    sCliente *auxiliar = gymMusculito->misClientes;
    sCliente *ultimo = (gymMusculito->misClientes) + gymMusculito->CantClientes;

    while(true)
    {	if (((auxiliar->nombre == ClienteBuscado.nombre) &&  (auxiliar->apellido==ClienteBuscado.apellido)) || (auxiliar->email == ClienteBuscado.email))
        {
            return *auxiliar;
        }
        if (auxiliar == ultimo)
            break;

        auxiliar++;
    }
    return ClienteNulo;
}

eRmCliente removerCliente (sMusculito * gymMusculito, sCliente ClienteEliminado)
{
    sCliente *auxiliar = gymMusculito ->misClientes;
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
}

eAgrCliente agregarCliente (sMusculito *gymMusculito, sCliente ClienteNuevo)
{
    if(!hayEspacio (gymMusculito))
        return eAgrCliente::ErrAgrCliente;

    gymMusculito->CantClientes++;
    ClienteNuevo = gymMusculito->misClientes [gymMusculito->CantClientes-1];

    return eAgrCliente ::ExitoAgrCliente;
}
