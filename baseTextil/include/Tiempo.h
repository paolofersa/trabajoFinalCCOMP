#ifndef TIEMPO_H
#define TIEMPO_H
#include <iostream>

using namespace std;


class Tiempo
{
    public:
        explicit Tiempo(int=0, int=0, int=0); //formato HH/MM/SS
        ~Tiempo();
        //funciones para definir datos de variables
        void defTiempo(int, int, int);
        void defHora (int);
        void defMinuto (int);
        void defSegundo (int);

        //funcion para modificar tiempo
        void modifTiempo (int, int, int);

        //funciones para obtener valor de variables
        unsigned int getHora() const;
        unsigned int getMinuto() const;
        unsigned int getSegundo() const;

    private:
        unsigned int hora;
        unsigned int minuto;
        unsigned int segundo;
};

#endif // TIEMPO_H
