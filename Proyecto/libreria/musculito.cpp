#include <fstream>
#include "musculito.h"

eBusCliente BuscarCliente (std:: fstream& infileclientes, const sCliente ClienteBuscado )
//eBusCliente BuscarCliente(sScliente *misCLiente, sCliente ClienteBuscado)
{
    /*for(unsigned long int i=0; i< sizeof(infileclientes);i++){
        if (((infileclientes[i].nombre == ClienteBuscado.nombre) &&  (infileclientes[i].apellido==ClienteBuscado.apellido)) || (infileclientes[i].email == ClienteBuscado.email))
        {
            return eBusCliente::ExisteCliente;
        }
        if (i==sizeof(infileclientes))
            break;

        return eBusCliente::NoExisteCliente;
        }
*/
        infileclientes.seekg(0, std::ios::end);  // Mover el puntero al final del archivo
        std::streampos length = infileclientes.tellg();  // Obtener la posición actual del puntero (tamaño del archivo)
        infileclientes.seekg(0, std::ios::beg);  // Mover el puntero al principio del archivo

        // Verificar si el archivo está vacío
        if (length == 0) {
            return eBusCliente::NoExisteCliente;
        }

        sCliente clienteActual;

        // Recorre el archivo leyendo los datos de cada cliente
        while (infileclientes >> clienteActual.idCliente >> clienteActual.nombre >> clienteActual.apellido >> clienteActual.email
          >> clienteActual.telefono >> clienteActual.fechaNac >> clienteActual.estado) {
            if ((clienteActual.nombre == ClienteBuscado.nombre && clienteActual.apellido == ClienteBuscado.apellido) || clienteActual.email == ClienteBuscado.email) {
                // El cliente buscado existe en el archivo
                return eBusCliente::ExisteCliente;
            }
        }

        // Cliente no encontrado en el archivo
        return eBusCliente::NoExisteCliente;
    }

int idCliente(std:: fstream& infileclientes, const sCliente ClienteBuscado)
{
       /* int BuscarCliente = BuscarCliente(infileclientes, ClienteBuscado);
        if (BuscarClientes == ExisteCliente)
        {
            for(int i=0; i< sizeof(infileclientes);i++)
            {
                if (((infileclientes[i].nombre == ClienteBuscado.nombre) &&  (infileclientes[i].apellido==ClienteBuscado.apellido)) || (infileclientes[i].email == ClienteBuscado.email))
                {
                    return infileclientes[i].idCliente;
                }
            }
        }
        if (BuscarCliente == NoExisteCliente)
        {
            return 0;
        }*/
        eBusCliente resultadoBusqueda = BuscarCliente(infileclientes, ClienteBuscado);

        if (resultadoBusqueda == eBusCliente::ExisteCliente) {
            sCliente clienteActual;
            while (infileclientes >> clienteActual.email >> clienteActual.idCliente >> clienteActual.nombre >> clienteActual.apellido
                   >> clienteActual.telefono >> clienteActual.fechaNac >> clienteActual.estado) {
                if ((clienteActual.nombre == ClienteBuscado.nombre && clienteActual.apellido == ClienteBuscado.apellido) ||
                    clienteActual.email == ClienteBuscado.email) {
                    return clienteActual.idCliente;
                }
            }
        } else if (resultadoBusqueda == eBusCliente::NoExisteCliente) {
            return 0;
        }

        return 0;  // Por si no se cumple ninguna condición.
}


eEstado estadoCuota (std:: fstream& infileclientes, sCliente ClienteBuscado)
{
       /* int posicion;

        for(int i=0; i< sizeof(infileclientes);i++)
        {
            if(misClientes[i].idCliente == ClienteBuscado.idCliente)
            {
             posicion=i;
            }
        }
     if(infileclientes[posicion].estado == 0)
        {
            return eEstado::alDia;
        }
     if(infileclientes[posicion].estado < 0)
     {
            return eEstado::Deuda;
     }
     if(infileclientes[posicion].estado > 0)
     {
            return eEstado::aFavor;
     }*/
        sCliente clienteActual;
        int posicion = -1;

        while (infileclientes >> clienteActual.email >> clienteActual.idCliente >> clienteActual.nombre >> clienteActual.apellido
               >> clienteActual.telefono >> clienteActual.fechaNac >> clienteActual.estado) {
            if (clienteActual.idCliente == ClienteBuscado.idCliente) {
                posicion = 0;
                break;  // No necesitas seguir leyendo el archivo si encontraste el cliente
            }
        }

        if (posicion != -1) {
            if (clienteActual.estado == 0) {
                return eEstado::alDia;
            } else if (clienteActual.estado < 0) {
                return eEstado::Deuda;
            } else {
                return eEstado::aFavor;
            }
        } else {
            // Cliente no encontrado
            return eEstado::alDia;
        }
}

float verificarClase (std:: fstream& infileclases,const sClases ClaseBuscada)
{
     /*int posicion;
     for(int i=0; i<sizeof(infileclases); i++)
     {
            if(misClases[i].nombre == ClaseBuscada.nombre && infileclases[i].horario == ClaseBuscada.horario)
            {
             posicion = i;
             return misClases[posicion].idClase;
            }
     }
     return -1; */

        sClases claseActual;
        int posicion = -1;

        while (infileclases >> claseActual.nombre >> claseActual.horario >> claseActual.idClase) {
            if (claseActual.nombre == ClaseBuscada.nombre && claseActual.horario == ClaseBuscada.horario) {
                posicion = 0;
                break;  // No necesitas seguir leyendo el archivo si encontraste la clase
            }
        }

        if (posicion != -1) {
            return claseActual.idClase;
        } else {
            // Clase no encontrada
            return -1;
        }
}

eAgrCliente agregarCliente ()
{

}

eSuperposicion verificarSuperposicion()
{

}

eCupos verificarCupos()
{

}

eTipoClase nombreClase(std:: fstream& infileclases, int CupoMax)
{

        /*if (infileclases.nombre == "Spinning")
        {
            CupoMax = 45;
            return eTipoClase::Spinning;
        }
        if (infileclases.nombre == "Yoga")
        {
            CupoMax = 25;
            return eTipoClase::Yoga;
        }
        if (infileclases.nombre == "Pilates")
        {
            CupoMax = 15;
            return eTipoClase::Pilates;
        }
        if (infileclases.nombre == "Stretching")
        {
            CupoMax = 40;
            return eTipoClase::Stretching;
        }
        if (infileclases.nombre == "Zumba")
        {
            CupoMax = 50;
            return eTipoClase::Zumba;
        }
        if (infileclases.nombre == "Boxeo")
        {
            CupoMax = 30;
            return eTipoClase::Boxeo;
        }
        if (infileclases.nombre == "Musculacion")
        {
            CupoMax = 30;
            return eTipoClase::Musculacion;
        } */
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
*/
