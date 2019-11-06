#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include "Fecha.h"
#include "Tiempo.h"

using namespace std;

class Pedido
{
    public:
        Pedido();  //codigo
        ~Pedido();
        //instancias de fecha y tiempo
        Tiempo tEmision;
        Tiempo tAtencion;
        Fecha fEmision;
        Fecha fAtencion;
        //valores de fecha y tiempo
        void defFechaEmision(int,int,int);
        void defTiempoEmision(int,int,int);
        void defFechaAtencion(int,int,int);
        void defTiempoAtencion(int,int,int);
        void defOperario(string);
        void defDestino(string);
        //funciones para obtener variables
        unsigned int getTiempoEmision(string);  //consulta o por HH o por MM o por SS
        unsigned int getFechaEmision(string);  //consulta o por DD o por MM o por AA
        unsigned int getTiempoAtencion(string);  //consulta o por HH o por MM o por SS
        unsigned int getFechaAtencion(string);  //consulta o por DD o por MM o por AA
        int getCodigoPedido();
        string getAreaDeDestino();
        string getOperarioEncargado();
        //método para determinar cantidad de pedidos instanciados
        static unsigned int getCantidadPedidos();

        //funciones para CONSULTAS del usuario INDICADORES


    private:
        int codigoPedido;
        string areaDeDestino;
        string operarioEncargado;
        unsigned int fechaEmision[3];
        unsigned int tiempoEmision[3];
        unsigned int fechaAtencion[3];
        unsigned int tiempoAtencion[3];
        //cantidad de pedidos instanciados
        static unsigned int cantidadPedidos;
};

#endif // PEDIDO_H
