#ifndef AREAPROVEEDORA_H
#define AREAPROVEEDORA_H
#include "AreaDeProduccion.h"
#include <fstream>
#include<iostream>

using namespace std;

class AreaProveedora:public AreaDeProduccion
{
    public:
        AreaProveedora();
        virtual ~AreaProveedora();
        void defJefe(string);
        void regDatos();

    protected:

    private:
        string jefeDeTurno;
};

#endif // AREAPROVEEDORA_H
