#include "archivos.h"

void leerArchivoClientes (ifstream&infileclientes)
{
    str header;

    getline(*infileclientes, header);

    while(infileclientes->good()){
        str line;
        getline (*infileclientes,line);

        char delimiter= ',';
        str field;

        stringstream iss;
        iss<<line;

        while (getline (iss, field, delimiter))
        {
            cout << field << " ";
        }
        cout << endl;
    }

}

void leerArchivoClases (ifstream *infileclases)
{
    str header;

    getline(*infileclases, header);

    while(infileclases->good()){
        str line;
        getline (*infileclases,line);

        char delimiter= ',';
        str field;

        stringstream iss;
        iss<<line;

        while (getline (iss, field, delimiter))
        {
            cout << field << " ";
        }
        cout << endl;
    }
}

void leerArchivoAsistencias (ifstream *infileasistencias)
{
    str header;

    getline(*infileasistencias, header);

    while(infileasistencias->good()){
        str line;
        getline (*infileasistencias,line);

        char delimiter= ',';
        str field;

        stringstream iss;
        iss<<line;

        while (getline (iss, field, delimiter))
        {
            cout << field << " ";
        }
        cout << endl;
    }
}

void resizeclientes(sCliente** misClientes, u_int *tam)
{
    (*tam) = *(tam)+1;  //incremento el contador de tamaño
    sCliente*aux = new sCliente[*(tam)]; // creo un auxiliar memoria dinamica

    for(u_int i=0; i< (*tam)-1; i++)
    {
        aux[i] = (*misClientes)[i]; //copio todas las cosas del array al nuevo array auxiliar
    }
    delete[]*misClientes; //borro el array
    *misClientes = aux; //asigno la nueva direccion al nuevo array
}



