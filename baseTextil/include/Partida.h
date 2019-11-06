#ifndef PARTIDA_H
#define PARTIDA_H
#include <iostream>
#include "Fecha.h"
#include "Tiempo.h"

using namespace std;

class Partida
{
    public:
        Partida(string);
        ~Partida();
        //objetos de tiempo y fecha
        Tiempo tEntrada;
        Fecha fEntrada;
        //definicion de variables
        void defArticulo(string);
        void defUbicacion(string);
        void defPeso(double);
        void defFechaEntrada(int,int,int);
        void defTiempoEntrada(int,int,int);
        //obtencion de variables
        string getArticulo();
        string getUbicacion();
        double getPeso();
        unsigned int getFechaEntrada(string);
        unsigned int getTiempoEntrada(string);

    private:
        string codigoPartida;
        string articulo;
        string ubicacion;
        string estadoEnProceso;
        double peso;
        unsigned int fechaEntrada[3];
        unsigned int tiempoEntrada[3];

};

#endif // PARTIDA_H
