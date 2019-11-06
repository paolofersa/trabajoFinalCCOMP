#include "Pedido.h"
#include <iostream>
#include "Fecha.h"
#include "Tiempo.h"

using namespace std;
//cantidad de pedidos de forma global
unsigned int Pedido::cantidadPedidos = 0;
unsigned int Pedido::getCantidadPedidos(){
    return cantidadPedidos;
}
//constructor
Pedido::Pedido(){
    cantidadPedidos++;
    codigoPedido = cantidadPedidos;
}
Pedido::~Pedido(){cantidadPedidos--;}
//definir valores de fecha y hora
void Pedido::defFechaEmision(int d, int m, int a){
    fEmision.defFecha(d,m,a);
    fechaEmision[0]=fEmision.getDia();  //asignar dia de entrada
    fechaEmision[1]=fEmision.getMes();  //asignar mes de entrada
    fechaEmision[2]=fEmision.getAnio(); //asignar anio de entrada
}
void Pedido::defTiempoEmision(int h, int m, int s){
    tEmision.defTiempo(h,m,s);
    tiempoEmision[0]=tEmision.getHora();    //asignar hora de entrada
    tiempoEmision[1]=tEmision.getMinuto();  //asignar minuto de entrada
    tiempoEmision[2]=tEmision.getSegundo(); //asignar segundo de entrada
}
void Pedido::defFechaAtencion(int d, int m, int a){
    fAtencion.defFecha(d,m,a);
    fechaAtencion[0]=fAtencion.getDia();  //asignar dia de entrada
    fechaAtencion[1]=fAtencion.getMes();  //asignar mes de entrada
    fechaAtencion[2]=fAtencion.getAnio(); //asignar anio de entrada
}
void Pedido::defTiempoAtencion(int h, int m, int s){
    tAtencion.defTiempo(h,m,s);
    tiempoAtencion[0]=tAtencion.getHora();    //asignar hora de entrada
    tiempoAtencion[1]=tAtencion.getMinuto();  //asignar minuto de entrada
    tiempoAtencion[2]=tAtencion.getSegundo(); //asignar segundo de entrada
}
void Pedido::defOperario(string o){
    operarioEncargado = o;
}
void Pedido::defDestino(string d){
    areaDeDestino = d;
}
//obtener valores del pedido
int Pedido::getCodigoPedido(){return codigoPedido;}
string Pedido::getAreaDeDestino(){return areaDeDestino;}
string Pedido::getOperarioEncargado(){return operarioEncargado;}
unsigned int Pedido::getTiempoEmision(string parametro){
    unsigned int i = 0; //variable para desplazarse por el arreglo de Tiempo
    if (parametro == "HH")
        i = 1;
    else{
        if (parametro == "MM")
            i = 2;
        else{
            if (parametro == "SS")
                i = 3;
        }//fin else MM
    }//fin else HH
    return *(tiempoEmision + i - 1);
}
unsigned int Pedido::getFechaEmision(string parametro){
    unsigned int i = 0; //variable para desplazarse por el arreglo de Fecha
    if (parametro == "DD")
        i = 1;
    else{
        if (parametro == "MM")
            i = 2;
        else{
            if (parametro == "AA")
                i = 3;
        }//fin else MM
    }//fin else HH
    return *(fechaEmision + i - 1);
}
unsigned int Pedido::getTiempoAtencion(string parametro){
    unsigned int i = 0; //variable para desplazarse por el arreglo de Tiempo
    if (parametro == "HH")
        i = 1;
    else{
        if (parametro == "MM")
            i = 2;
        else{
            if (parametro == "SS")
                i = 3;
        }//fin else MM
    }//fin else HH
    return *(tiempoAtencion + i - 1);
}
unsigned int Pedido::getFechaAtencion(string parametro){
    unsigned int i = 0; //variable para desplazarse por el arreglo de Fecha
    if (parametro == "DD")
        i = 1;
    else{
        if (parametro == "MM")
            i = 2;
        else{
            if (parametro == "AA")
                i = 3;
        }//fin else MM
    }//fin else HH
    return *(fechaAtencion + i - 1);
}
