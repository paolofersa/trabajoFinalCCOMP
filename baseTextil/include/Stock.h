#ifndef STOCK_H
#define STOCK_H
#include "Partida.h"
#include <fstream>
#include <iostream>

using namespace std;


class Stock
{
    public:
        Stock(int);
        virtual ~Stock();
        Stock(Stock(&o));
        void defPartidas();
        void getPartidas();
        void ordenarPorPeso();

    protected:

    private:
        int cantRegistros;
        Partida *ptroPartida;
};

#endif // STOCK_H
