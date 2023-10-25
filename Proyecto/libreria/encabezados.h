#ifndef ENCABEZADOS_H
#define ENCABEZADOS_H

#include <string>

typedef std::string str;
typedef unsigned int u_int;

struct clasesGYM
{
    int idClase;		 //código único de cada clase
    int horario;
    char nombre [15];
};
typedef struct clasesGYM  gClases;


#endif // ENCABEZADOS_H
