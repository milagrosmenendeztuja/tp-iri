#include "archivos.h"

eCodArchivos leerArchivoClientes (ifstream *infileclientes)
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

eCodArchivos leerArchivoClases (ifstream *infileclases)
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

eCodArchivos leerArchivoAsistencias (ifstream *infileasistencias)
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


