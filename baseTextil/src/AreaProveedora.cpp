#include "AreaProveedora.h"
#include "AreaDeProduccion.h"
#include<iostream>

using namespace std;

AreaProveedora::AreaProveedora()
{
    //ctor
}

AreaProveedora::~AreaProveedora()
{
    //dtor
}
void AreaProveedora::defJefe(string j)
{
    jefeDeTurno = j;
}
void AreaProveedora::regDatos()
{
    ofstream destino;
    destino.open("proveedora.txt",ios::app);
    destino<<codArea<<" "<<nombreArea<<" "<<locacion<<" "<<jefeDeTurno<<endl;
    destino.close();
}
