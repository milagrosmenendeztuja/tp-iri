#ifndef CLASES_H
#define CLASES_H

#include "encabezados.h"

struct clases
{
    gClases datosClase;
    int CuposMax;
    char sala[10];
    int CuposActuales;
    //un array con los inscriptos en la clase

};
typedef struct clases sClases;


#endif // CLASES_H
