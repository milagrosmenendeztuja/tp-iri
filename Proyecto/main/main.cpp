#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    instream infileclientes;
       infileclientes.open("../DataSet TP/iriclientesGYM.csv");
    if (!infileclientes.is_open())
    {
        cout << "Error al abrir el archivo CSV" << endl;
        return 1;
    }

    ifstream infileclases("iriclasesGYM.csv");
    if (!infileclases.is_open())
    {
        cout << "Error al abrir el archivo CSV" << endl;
        return 1;
    }

    ifstream infileasistencias("asistencias_1697673600000.dat");
    if (!infileasistencias.is_open())
    {
        cout << "Error al abrir el archivo CSV" << endl;
        return 1;
    }

}
