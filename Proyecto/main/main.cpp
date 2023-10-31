#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream infileclientes;
    infileclientes.open("..\\..\\Proyecto\\Dataset TP\\iriClientesGYM.csv");
    if (!infileclientes.is_open())
    {
        cout << "1 Error al abrir el archivo CSV" << endl;

    }

    ifstream infileclases("..\\..\\Proyecto\\Dataset TP\\iriClasesGYM.csv");
    if (!infileclases.is_open())
    {
        cout << "2 Error al abrir el archivo CSV" << endl;
        return 1;
    }

    ifstream infileasistencias("..\\..\\Proyecto\\Dataset TP\\asistencias_1697673600000.dat");
    if (!infileasistencias.is_open())
    {
        cout << "3 Error al abrir el archivo CSV" << endl;
        return 1;
    }

}
