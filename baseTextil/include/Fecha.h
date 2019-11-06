#ifndef FECHA_H
#define FECHA_H
#include <iostream>

using namespace std;


class Fecha
{
    public:
        explicit Fecha(int = 1, int = 1, int = 2000);
        //funciones para definir datos de variables
        void defFecha (int, int, int); //formato AA/MM/DD
        void defDia (int);
        void defMes (int);
        void defAnio (int);

        //modificar fecha
        void modifFecha(int, int, int);

        //funciones para obtener valor de variables
        unsigned int getDia() const;
        unsigned int getMes() const;
        unsigned int getAnio() const;


    private:
        unsigned int dia;
        unsigned int mes;
        unsigned int anio;
};

#endif // FECHA_H
