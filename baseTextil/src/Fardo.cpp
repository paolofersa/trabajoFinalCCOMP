#include "Fardo.h"
#include "Tiempo.h"
#include "Fecha.h"

#include <iostream>

using namespace std;
//constructor
Fardo::Fardo(string _codigo, double _peso, double _tara){
    codigoFardo = _codigo;
    pesoBruto = _peso;
    tara = _tara;
    pesoNeto = pesoBruto - tara;
}
Fardo::~Fardo(){}
//definir valores de fecha y hora
void Fardo::defFechaEntrada(int d, int m, int a){
    fEntrada.defFecha(d,m,a);
    fechaEntrada[0]=fEntrada.getDia();  //asignar dia de entrada
    fechaEntrada[1]=fEntrada.getMes();  //asignar mes de entrada
    fechaEntrada[2]=fEntrada.getAnio(); //asignar anio de entrada
}

void Fardo::defTiempoEntrada(int h, int m, int s){
    tEntrada.defTiempo(h,m,s);
    tiempoEntrada[0]=tEntrada.getHora();    //asignar hora de entrada
    tiempoEntrada[1]=tEntrada.getMinuto();  //asignar minuto de entrada
    tiempoEntrada[2]=tEntrada.getSegundo(); //asignar segundo de entrada
}

//obtener valores del fardo
string Fardo::getCodigo(){return codigoFardo;}
double Fardo::getPeso(){return pesoNeto;}
unsigned int Fardo::getTiempoEntrada(string parametro){
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
    return *(tiempoEntrada + i - 1);
}
unsigned int Fardo::getFechaEntrada(string parametro){
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
    return *(fechaEntrada + i - 1);
}
