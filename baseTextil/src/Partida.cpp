#include "Partida.h"
#include "Fecha.h"
#include "Tiempo.h"
#include <iostream>

using namespace std;

Partida::Partida(){

}

Partida::~Partida(){
    //dtor
}

//DEFINIR VALORES DE VARIABLES
void Partida::defCodigo(int c)
{
    codPartida = c;
}
void Partida::defArt(string ar)
{
    articulo = ar;
}
void Partida::defPeso(double p)
{
    peso = p;
}
void Partida::defAreaProc(int ap)
{
    areaProc = ap;
}
void Partida::defFechaIngreso(int d,int me,int a)
{
    fechaIngreso[0] = d;
    fechaIngreso[1] = me;
    fechaIngreso[2] = a;
}
void Partida::defTiempoIngreso(int h,int mi, int s)
{
    tiempoIngreso[0] = h;
    tiempoIngreso[1] = mi;
    tiempoIngreso[2] = s;
}
int Partida::getCodigo()
{
    return codPartida;
}
string Partida::getArticulo()
{
    return articulo;
}
double Partida::getPeso()
{
    return peso;
}
int Partida::getAreaProc()
{
    return areaProc;
}
int Partida::getHora()
{
    return tiempoIngreso[0];
}
int Partida::getMinuto()
{
    return tiempoIngreso[1];
}
int Partida::getSegundo()
{
    return tiempoIngreso[2];
}
int Partida::getDia()
{
    return fechaIngreso[0];
}
int Partida::getMes()
{
    return fechaIngreso[1];
}
int Partida::getAnio()
{
    return fechaIngreso[2];
}
