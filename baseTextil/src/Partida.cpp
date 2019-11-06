#include "Partida.h"
#include <iostream>
#include "Fecha.h"
#include "Tiempo.h"

using namespace std;

Partida::Partida(string _codigo){
    codigoPartida = _codigo;
}

Partida::~Partida(){
    //dtor
}

//definir variables
void Partida::defArticulo(string art){
    articulo = art;
}
void Partida::defUbicacion(string ubi){
    ubicacion = ubi;
}
void Partida::defPeso(double p){

}
/*void Partida::defTiempoEntrada(int h, int m, int s){
    tEntrada.defTiempo(h,m,s);
    tiempoEntrada[0]=tEntrada.getHora();    //asignar hora de entrada
    tiempoEntrada[1]=tEntrada.getMinuto();  //asignar minuto de entrada
    tiempoEntrada[2]=tEntrada.getSegundo(); //asignar segundo de entrada
}
void Partida::defFechaEntrada(int d, int m, int a){
    fEntrada.defFecha(d,m,a);
    fechaEntrada[0]=fEntrada.getDia();  //asignar dia de entrada
    fechaEntrada[1]=fEntrada.getMes();  //asignar mes de entrada
    fechaEntrada[2]=fEntrada.getAnio(); //asignar anio de entrada
}
*/
