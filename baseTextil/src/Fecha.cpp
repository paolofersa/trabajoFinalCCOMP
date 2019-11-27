#include "Fecha.h"
#include <iostream>

using namespace std;

Fecha::Fecha(int _dia, int _mes, int _anio){
    defFecha(_dia, _mes, _anio);
}

//funciones para verificar y definir variables base de la clase
void Fecha::defFecha(int d, int m, int a){
    defAnio(a);
    defMes(m);
    defDia(d);
}

void Fecha::defAnio(int a){
    //if (a/1000>0 && a/1000<3)
    anio = a;
    //else
    //    throw invalid_argument("anio invalido");
}

void Fecha::defMes(int m){
    //if (m>0 && m<=12)
    mes = m;
    //else
    //    throw invalid_argument("mes invalido");
}

void Fecha::defDia(int d){
    //int arrMes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    //int bis = 0;    //variable para agregar un numero en caso el año sea bisiesto
    //if (anio%4 == 0)
    //    bis = 1;   //en caso el año sea bisiesto, se incrementa en uno el contador
    //if (d > 0 && d <= (*(arrMes + mes - 1) + ((mes == 2)? bis : 0)))   //en caso el mes sea febrero, el límite de días aumentará en 1
    dia = d;
    //else
    //    throw invalid_argument("dia invalido");
}

//funcion para modificar fecha
void Fecha::modifFecha(int d, int m, int a){
    defAnio(a);
    defMes(m);
    defDia(d);
}

//funciones para obtener valor de variables
unsigned int Fecha::getDia() const{return dia;}
unsigned int Fecha::getMes() const{return mes;}
unsigned int Fecha::getAnio() const{return anio;}
