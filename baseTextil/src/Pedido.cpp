#include "Pedido.h"
#include <iostream>
#include <fstream>
#include "Fecha.h"
#include "Tiempo.h"
#include "Registro.h"

using namespace std;
//CANTIDAD DE PEDIDOS DE FORMA GLOBAL
unsigned int Pedido::cantidadPedidos = 0;

//constructor
Pedido::Pedido(){
    cantidadPedidos++;
    int _codPedido, _codMaterial, _areaCliente, _h, _mi, _s, _d, _me, _a;
    double _peso;
    //LEER FICHERO
    ifstream Leer;
    Leer.open("pedidos.txt");
    Leer >> _codPedido;
    while(!Leer.eof()){
        Leer>>_codMaterial>>_peso>>_areaCliente>>_h>>_mi>>_s>>_d>>_me>>_a;
        Leer>>_codPedido;
    }
    codPedido = cantidadPedidos + _codPedido;
    Leer.close();
}
Pedido::~Pedido(){cantidadPedidos--;}

//DEFINIR VARIABLES
void Pedido::defArea(int ac){areaCliente = ac;}

//REGISTRAR DATOS EN .txt
void Pedido::regDatos(){
    //ACTUALIZAR partidas.txt
    //DEFINIR VARIABLES TEMPORALES
    int _codMaterial, _areaProv, _h, _mi, _s, _d, _me, _a;
    string _articulo;
    double _peso,nPeso;
    bool encontrado = false;

    //LEER FICEHRO
    ofstream Temp;
    ifstream Leer;
    Leer.open("partidas.txt");
    Temp.open("Temp.txt");
    Leer >> _codMaterial;
    while(!Leer.eof()){
        Leer>>_articulo>>_peso>>_areaProv>>_h>>_mi>>_s>>_d>>_me>>_a;
        if(_codMaterial == codMaterial){
            encontrado = true;
            nPeso = _peso - peso;       //ACTUALIZA EL PESO PARA EL STOCK
            if(nPeso>0){
                Temp <<_codMaterial<<" "<<_articulo<<" "<<nPeso<<" "<<_areaProv<<" "<<_h<<" "<<_mi<<" "<<_s<<" "<<_d<<" "<<_me<<" "<<_a<<endl;
                cout << "Peso de partida actualizada correctamente" << endl;
                cout << endl;
                //REGISTRAR EN pedidos.txt
                ofstream destino;
                destino.open("pedidos.txt",ios::app);
                destino<<codPedido<<" "<<codMaterial<<" "<<peso<<" "<<areaCliente<<" "<<fecha[0]<<" "<<fecha[1]<<" "<<fecha[2]<<" "<<tiempo[0]<<" "<<tiempo[1]<<" "<<tiempo[2]<<endl;
                destino.close();
            }
            else{
                Temp <<_codMaterial<<" "<<_articulo<<" "<<_peso<<" "<<_areaProv<<" "<<_h<<" "<<_mi<<" "<<_s<<" "<<_d<<" "<<_me<<" "<<_a<<endl;
                cout << "Saldo insuficiente" << endl;
                cout << endl;
            }
        }
        else{
            Temp <<_codMaterial<<" "<<_articulo<<" "<<_peso<<" "<<_areaProv<<" "<<_h<<" "<<_mi<<" "<<_s<<" "<<_d<<" "<<_me<<" "<<_a<<endl;
        }
        Leer>>_codMaterial;
    }
    if (encontrado = false){
        cout << "No se encuentra partida" << endl;
        cout << endl;
    }
    Leer.close();
    Temp.close();
    remove("partidas.txt");
    rename("Temp.txt","partidas.txt");
}
