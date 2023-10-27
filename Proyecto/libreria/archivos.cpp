#include "archivos.h"
#include <fstream>
#include <iostream>
using namespace std;

eCodArchivos leerArchivoClientes (std::fstream *infileclientes)
{
    str header;
    getline(infileclientes,header);
    while(infileclientes.good()){
        str line;
        getline (infileclientes,line);

        char delimiter= ',';
        str field;
        istringstream iss(line);

        while (getline (iss, field, delimiter))
        {
            cout << field << " ";
        }
        cout << endl;
    }
    /* int N=1;
   /* sCliente *auxiliar= new sCliente[N];
    //sCliente auxiliar[N];
    sCliente basura;
    char coma;
    infileclientes>>basura>>coma>>basura>>coma>>basura>>coma>>basura>>coma>>basura>>coma>>basura>>coma>>basura;
    if(!infileclientes->is_open())
        return eCodArchivos::ErrorApertura;

    int i=0;
    while(infileclientes)
    {
        infileclientes>>auxiliar[i].idCliente>>coma>>auxiliar[i].nombre>>coma>>auxiliar[i].apellido>>coma>>auxiliar[i].email>>coma>>auxiliar[i].telefono>>coma>>auxiliar[i].fechaNac>>coma>>auxiliar[i].estado;
        //(misClientes+i)->idCliente = auxiliar->idCliente;
        //(misClientes+i)->nombre = auxiliar->nombre;
        //(misClientes+i)->apellido = auxiliar->apellido;
        //(misClientes+i)->email = auxiliar->email;
        //(misClientes+i)->telefono = auxiliar->telefono;
        //(misClientes+i)->fechaNac = auxiliar->fechaNac;
        //(misClientes+i)->estado = auxiliar->estado;
        //resizearray(auxiliar,N);
        i++;
    }
}

sCliente* resizearray(sCliente* misClientes, u_int tam) {
    sCliente* aux = new sCliente[tam+1];

    if(aux != nullptr) {

        for(u_int i = 0; i < tam+1; i++)
            aux[i] = misClientes[i]; // *(miLista + i)

        delete[] misClientes;
        return aux;
    }

    return nullptr;
}
eCodArchivos leerArchivoClases (std::fstream*infileclases, sClases*misClases)
{
    sClases auxiliar;
    char coma;
    int i=0;

    if(!infileclases->is_open())
        return eCodArchivos::ErrorApertura;

    while(infileclases>>auxiliar.idClase>>coma>>auxiliar.nombre>>coma>>auxiliar.horario)
    {
        (misClases+i)->idClase = auxiliar.idClase;
        (misClases+i)->nombre = auxiliar.nombre;
        (misClases+i)->horario = auxiliar.horario;
        i++;
    }

    return eCodArchivos::ExitoOperacion;
}

eCodArchivos leerArchivoAsistencias (std::fstream*infileasistencias, sAsistencia *misAsistencias)
{

}
