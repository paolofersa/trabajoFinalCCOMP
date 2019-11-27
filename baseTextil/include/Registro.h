#ifndef REGISTRO_H
#define REGISTRO_H
#include "Fecha.h"
#include "Tiempo.h"

#include <iostream>

using namespace std;


class Registro
{
    public:
        Registro();
        virtual ~Registro();
        Fecha f;
        Tiempo t;
        //M�TODOS DE DEFINI�N
        void defCod (int);
        void defPeso (double);
        void defFecha(int,int,int);
        void defTiempo(int,int,int);
        virtual void regDatos() = 0; // FUNCI�N VIRTUAL PURA

    protected:
        int codMaterial;
        double peso;
        unsigned int tiempo[3];
        unsigned int fecha[3];

    private:
};

#endif // REGISTRO_H
