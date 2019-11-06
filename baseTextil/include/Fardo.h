#ifndef FARDO_H
#define FARDO_H
#include <iostream>
#include "Fecha.h"
#include "Tiempo.h"

using namespace std;


class Fardo
{
    public:
        Fardo(string,double,double);    //solicita codigo, pesoBruto, tara
        ~Fardo();
        //instancias de fecha y tiempo
        Fecha fEntrada;
        Tiempo tEntrada;
        //valores de fecha y tiempo
        void defFechaEntrada(int,int,int);
        void defTiempoEntrada(int,int,int);
        //funciones para obtener variables
        unsigned int getTiempoEntrada(string);  //consulta o por HH o por MM o por SS
        unsigned int getFechaEntrada(string);  //consulta o por DD o por MM o por AA
        string getCodigo();
        double getPeso();
        //obtener cantidad de fardos instanciados
        //static unsigned int getContarFardos();

    private:
        string codigoFardo;
        double pesoBruto;
        double pesoNeto;
        double tara;
        unsigned int fechaEntrada[3];
        unsigned int tiempoEntrada[3];
        //static unsigned int contarFardos;

};

#endif // FARDO_H
