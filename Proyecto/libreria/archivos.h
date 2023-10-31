#ifndef ARCHIVOS_H
#define ARCHIVOS_H

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "clientes.h"
#include "clases.h"

using namespace std;

typedef enum codArchivos{ErrorApertura=-1, ErrorEscritura=0, ExitoOperacion=1} eCodArchivos;

eCodArchivos leerArchivoClientes (ifstream *infileclientes);
eCodArchivos leerArchivoClases (ifstream*infileclases);
eCodArchivos leerArchivoAsistencias (ifstream*infileasistencias);
sCliente* resizearray(sCliente* misClientes, u_int tam);

#endif // ARCHIVOS_H
