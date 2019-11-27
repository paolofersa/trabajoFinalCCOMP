#include "Stock.h"
#include "Partida.h"
#include <fstream>
#include <iostream>
#include <iomanip>  //setw  CONTROLADOR PARAMETRICO


using namespace std;

Stock::Stock(int cantRegistros)
{
    ptroPartida = new Partida[cantRegistros];
    this -> cantRegistros = cantRegistros;
    defPartidas();
}

Stock::~Stock()
{
    delete [] ptroPartida;
}

Stock::Stock(Stock(&o))
{
    ptroPartida = new Partida[o.cantRegistros];
    cantRegistros = o.cantRegistros;
    for (int i=0; i < cantRegistros; i++){
        ptroPartida[i] = o.ptroPartida[i];
    }
}
void Stock::defPartidas()
{
    //DEFINIR VARIABLES PROVISIONALES
    int _codPartida, _areaProc, _h, _mi, _s, _d, _me, _a;
    string _articulo;
    double _peso;
    //EXTRAER LINEA POR LINEA Y ASIGNAR VALORES A VARIBLES
    int indice = 0; //indice para mover por valores del arreglo
    ifstream archivoPartidas("partidas.txt",ios::in);
    while (archivoPartidas>>_codPartida>>_articulo>>_peso>>_areaProc>>_h>>_mi>>_s>>_d>>_me>>_a){
        ptroPartida[indice].defCodigo(_codPartida);
        ptroPartida[indice].defArt(_articulo);
        ptroPartida[indice].defPeso(_peso);
        ptroPartida[indice].defAreaProc(_areaProc);
        ptroPartida[indice].defTiempoIngreso(_h,_mi,_s);
        ptroPartida[indice].defFechaIngreso(_d,_me,_a);
        indice++;
    }
    archivoPartidas.close();
}
void Stock::getPartidas()
{
    cout <<left<<setw(7)<<"CODIGO"<<setw(10)<<"ARTICULO"<<setw(7)<<"PESO"<<setw(10)<<"PROCEDENCIA"<<'\t'<<"TIEMPO"<<'\t'<<"FECHA"<< endl<<endl;
    for (int i=0; i < cantRegistros; i++){
        cout <<left<<setw(7)<<ptroPartida[i].getCodigo()<<setw(10)<<ptroPartida[i].getArticulo()<<setw(7)<<ptroPartida[i].getPeso()<<setw(10)<<ptroPartida[i].getAreaProc()<<'\t'<< ptroPartida[i].getHora() << ":" << ptroPartida[i].getMinuto() << ":" << ptroPartida[i].getSegundo() << '\t' << ptroPartida[i].getDia() << "/" << ptroPartida[i].getMes() << "/" << ptroPartida[i].getAnio()<< endl;
    }
}
void Stock::ordenarPorPeso()
{
    Partida valorTemporal;
    int j;
    for (int i=1; i < cantRegistros; i++){
        valorTemporal = *(ptroPartida + i);
        //en caso el valor evaluado sea inferior al de la izquierda y aun haya valores que evaluar
        for (j=i-1; j>=0 && (ptroPartida+j)->getPeso() > valorTemporal.getPeso(); j--){
            *(ptroPartida+j+1) = *(ptroPartida+j);
        }
        *(ptroPartida+j+1) = valorTemporal;
    }
}
