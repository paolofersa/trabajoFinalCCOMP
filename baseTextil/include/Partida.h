#ifndef PARTIDA_H
#define PARTIDA_H
#include <iostream>
#include "Fecha.h"
#include "Tiempo.h"

using namespace std;

class Partida
{
    public:
        Partida();
        ~Partida();

        //definicion de variables
        void defCodigo(int);
        void defArt(string);
        void defPeso(double);
        void defAreaProc(int);
        void defTiempoIngreso(int,int,int);
        void defFechaIngreso(int,int,int);

        //obtencion de variables
        int getCodigo();
        string getArticulo();
        double getPeso();
        int getAreaProc();
        int getHora();
        int getMinuto();
        int getSegundo();
        int getDia();
        int getMes();
        int getAnio();

    private:
        int codPartida;
        string articulo;
        double peso;
        int areaProc;
        unsigned int fechaIngreso[3];
        unsigned int tiempoIngreso[3];

};

#endif // PARTIDA_H
