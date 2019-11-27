#include "Ingreso.h"
#include "Fecha.h"
#include "Tiempo.h"
#include "Registro.h"
#include <fstream>

#include <iostream>

using namespace std;

Ingreso::Ingreso(){}

Ingreso::~Ingreso(){}
//definir valores

void Ingreso::defArticulo(string a){ articulo=a;}
void Ingreso::defAreaProveedora(int ap){ areaProveedora=ap;}

//registrar datos en txt
void Ingreso::regDatos(){
    ofstream destino;
    destino.open("partidas.txt",ios::app);
    destino<<codMaterial<<" "<<articulo<<" "<<peso<<" "<<areaProveedora<<" "<<fecha[0]<<" "<<fecha[1]<<" "<<fecha[2]<<" "<<tiempo[0]<<" "<<tiempo[1]<<" "<<tiempo[2]<<endl;
    destino.close();
}
