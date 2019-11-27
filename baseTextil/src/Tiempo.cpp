#include "Tiempo.h"
#include <iostream>

using namespace std;

Tiempo::Tiempo(int _hora, int _minuto, int _segundo)
{
    defTiempo(_hora, _minuto, _segundo);
}

Tiempo::~Tiempo()
{
    //dtor
}

//funciones para verificar y definir variables base de la clase
void Tiempo::defTiempo(int h, int m, int s){
    defHora(h);
    defMinuto(m);
    defSegundo(s);
}

void Tiempo::defHora(int h){
    //if (h >= 0 && h < 24)//parametros de verificacion hora
    hora = h;
    //else
    //    throw invalid_argument("hora invalida");
}

void Tiempo::defMinuto(int m){
    //if (m >= 0 && m < 60)//parametros de verificacion minuto
    minuto = m;
    //else
    //    throw invalid_argument("minuto invalida");
}

void Tiempo::defSegundo(int s){
    //if (s >= 0 && s < 60)//parametros de verificacion segundo
    segundo = s;
    //else
    //    throw invalid_argument("segundo invalida");
}

//funcion para modificar Tiempo
void Tiempo::modifTiempo(int h, int m, int s){
    defHora(h);
    defMinuto(m);
    defSegundo(s);
}

//funciones para obtener valor de variables
unsigned int Tiempo::getHora() const{return hora;}
unsigned int Tiempo::getMinuto() const{return minuto;}
unsigned int Tiempo::getSegundo() const{return segundo;}
