#ifndef AREADEPRODUCCION_H
#define AREADEPRODUCCION_H
#include<iostream>

using namespace std;

class AreaDeProduccion
{
    public:
        AreaDeProduccion();
        virtual ~AreaDeProduccion();
        void defNombre(string);
        void defLocacion(string);
        void defCod(int);
        virtual void regDatos() = 0;

    protected:
        string nombreArea;
        string locacion;
        int codArea;

    private:
};

#endif // AREADEPRODUCCION_H
