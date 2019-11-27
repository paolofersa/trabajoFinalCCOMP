#include "AreaCliente.h"
#include "AreaDeProduccion.h"
#include <fstream>
#include <iostream>

using namespace std;

AreaCliente::AreaCliente()
{
    //ctor
}

AreaCliente::~AreaCliente()
{
    //dtor
}
void AreaCliente::defPrioridad(int p)
{
    prioridadAtencion = p;
}
void AreaCliente::regDatos()
{
    ofstream destino;
    destino.open("cliente.txt",ios::app);
    destino<<codArea<<" "<<nombreArea<<" "<<locacion<<" "<<prioridadAtencion<<endl;
    destino.close();
}
