#include "musculito.h"

sCliente BuscarCliente(sCliente *misClientes, sCliente ClienteBuscado)
{
    for(int i=0; i< sizeof(misClientes);i++){
        if (((misClientes[i].nombre == ClienteBuscado.nombre) &&  (misClientes[i].apellido==ClienteBuscado.apellido)) || (misClientes[i].email == ClienteBuscado.email))
        {
            int poscliente = i;
            return misClientes[poscliente];
        }
        if (i==sizeof(misClientes))
            break;

        return ClienteNulo;
        }
}

eRmCliente removerCliente (sCliente *misClientes, sCliente ClienteEliminado)
{
    sCliente *auxiliar = *sCliente;
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

int cantClientes (sCliente *misClientes)
{

}

eEstado estadoCuota (sCliente *misClientes, sCliente ClienteBuscado)
{

}
