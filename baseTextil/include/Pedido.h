#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>
#include "Fecha.h"
#include "Tiempo.h"
#include "Registro.h"

using namespace std;

class Pedido:public Registro
{
    public:
        Pedido();  //codigo
        ~Pedido();
        //DEFINIR VARIABLES
        void defArea(int);
        void regDatos();

    private:
        int codPedido;
        int areaCliente;
        //cantidad de pedidos instanciados
        static unsigned int cantidadPedidos;
};

#endif // PEDIDO_H
