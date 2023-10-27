#ifndef ARCHIVOS_H
#define ARCHIVOS_H
#include "clientes.h"
#include "clases.h"


typedef enum codArchivos{ErrorApertura=-1, ErrorEscritura=0, ExitoOperacion=1} eCodArchivos;

eCodArchivos leerArchivoClientes (std:: fstream infileclientes);
//eCodArchivos leerArchivoClases (std::fstream*infileclases, sClases*misClases);
//eCodArchivos leerArchivoAsistencias (std::fstream*infileasistencias, sAsistencia *misAsistencias);
sCliente* resizearray(sCliente* misClientes, u_int tam);

#endif // ARCHIVOS_H
