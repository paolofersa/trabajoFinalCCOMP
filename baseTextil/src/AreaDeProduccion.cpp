#include "AreaDeProduccion.h"
#include<iostream>

using namespace std;

AreaDeProduccion::AreaDeProduccion()
{
    //ctor
}

AreaDeProduccion::~AreaDeProduccion()
{
    //dtor
}
void AreaDeProduccion::defNombre(string n)
{
    nombreArea = n;
}
void AreaDeProduccion::defLocacion(string l)
{
    locacion = l;
}
void AreaDeProduccion::defCod(int c)
{
    codArea = c;
}
