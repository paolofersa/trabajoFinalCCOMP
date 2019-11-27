#include "Registro.h"
#include "Fecha.h"
#include "Tiempo.h"

#include <iostream>

using namespace std;

Registro::Registro()
{
    //ctor
}

Registro::~Registro()
{
    //dtor
}
void Registro::defFecha(int d, int m, int a){
    f.defFecha(d,m,a);
    fecha[0]=f.getDia();  //asignar dia de entrada
    fecha[1]=f.getMes();  //asignar mes de entrada
    fecha[2]=f.getAnio(); //asignar anio de entrada
}
void Registro::defTiempo(int h, int m, int s){
    t.defTiempo(h,m,s);
    tiempo[0]=t.getHora();    //asignar hora de entrada
    tiempo[1]=t.getMinuto();  //asignar minuto de entrada
    tiempo[2]=t.getSegundo(); //asignar segundo de entrada
}
void Registro::defCod(int c){ codMaterial=c;}
void Registro::defPeso(double p){ peso=p;}
