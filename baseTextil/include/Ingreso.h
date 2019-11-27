#ifndef INGRESO_H
#define INGRESO_H
#include "Fecha.h"
#include "Tiempo.h"
#include "Registro.h"

#include <iostream>

using namespace std;

class Ingreso:public Registro
{
    public:
        Ingreso();
        virtual ~Ingreso();
        //definir variables
        void defArticulo (string);
        void defAreaProveedora (int);
        void regDatos();
    protected:

    private:
        string articulo;
        int areaProveedora;
};

#endif // INGRESO_H
