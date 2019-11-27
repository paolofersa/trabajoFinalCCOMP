#ifndef AREACLIENTE_H
#define AREACLIENTE_H
#include "AreaDeProduccion.h"
#include<iostream>

using namespace std;

class AreaCliente:public AreaDeProduccion
{
    public:
        AreaCliente();
        virtual ~AreaCliente();
        void defPrioridad(int);
        void regDatos();

    protected:

    private:
        int prioridadAtencion;
};

#endif // AREACLIENTE_H
