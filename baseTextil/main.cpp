#include <iostream>
#include <fstream>
#include <stdlib.h> //para utilizar clean screen
#include "Fecha.h"
#include "Tiempo.h"
#include "Partida.h"
#include "Pedido.h"
#include "Ingreso.h"
#include "Stock.h"
#include "AreaCliente.h"
#include "AreaProveedora.h"
#include "AreaDeProduccion.h"

using namespace std;

int main()
{
    //VARIABLES GLOBALES
    unsigned int pedidosCreados = 0;    //contador de pedidos creados
    int opcion; //opcion elegida por el usuario
    int subOpcion;  //sub opcion elegida por el usuario

    //BUBLE PRINCIPAL DEL PROGRAMA
    do {
        system("cls");  //limpiar pantalla
        cout << endl;
        cout << "------------------------"<<endl;
        cout << "-----MENU PRINCIPAL-----"<<endl;
        cout << "------------------------"<<endl;
        cout << "1. Partidas"<<endl;
        cout << "2. Pedidos" << endl;
        cout << "3. Consultas" << endl;
        cout << "4. Otra funcion" << endl;
        cout << "5. Salir" << endl;
        cout << endl;
        cin >> opcion;
        switch(opcion){ //definir accion segun opcion elegida

        //**************************************PARTIDAS******************************************
        case 1:
            system("cls");  //limpiar pantalla
            do{     //bucle de sub menu
                cout << endl;
                cout << "---SUB MENU PARTIDAS---" << endl;
                cout << "1. Nuevo registro" <<endl;
                cout << "2. Buscar registro" <<endl;
                cout << "3. Salir" << endl;
                cout << endl;
                cin >> subOpcion;
                switch(subOpcion){  //definir accion segun sub opcion elegida
                //*********************************NUEVO REGISTRO***************************
                case 1:{
                    system("cls");  //limpiar pantalla
                    Ingreso reg;
                    cout << "Codigo de partida:" << endl;
                    int cod;
                    cin >> cod;
                    reg.defCod(cod);
                    cout << "Articulo:" << endl;
                    string art;
                    cin >>art;
                    reg.defArticulo(art);
                    cout << "Peso:" << endl;
                    double p;
                    cin >> p;
                    reg.defPeso(p);
                    cout << "Area proveedora:" << endl;
                    int prov;
                    cin >> prov;
                    reg.defAreaProveedora(prov);
                    cout << "Tiempo de Emision:" << endl;
                    cout << "HORA:" << endl;
                    int h;
                    cin >> h;
                    cout << "MINUTO:" << endl;
                    int mi;
                    cin >> mi;
                    cout << "SEGUNDO:" << endl;
                    int s;
                    cin >> s;
                    reg.defTiempo(h,mi,s);
                    cout << "Fecha de Emision:" << endl;
                    cout << "DIA:" << endl;
                    int d;
                    cin >> d;
                    cout << "MES:" << endl;
                    int me;
                    cin >> me;
                    cout << "ANIO:" << endl;
                    int a;
                    cin >> a;
                    reg.defFecha(d,me,a);
                    reg.regDatos();
                    break;}  //salir de nuevo registro
                //*******************************BUSCAR REGISTRO******************************
                case 2:{
                    system("cls");  //limpiar pantalla
                    //DEFINIR VARIABLES TEMPORALES
                    int bClave, _codPartida, _areaProc, _h, _mi, _s, _d, _me, _a;
                    string _articulo;
                    double _peso;
                    bool encontrado = false;
                    //LEER FICEHRO
                    ifstream Leer;
                    Leer.open("partidas.txt");
                    Leer >> _codPartida;
                    cout << "Ingrese codigo de partida" << endl;
                    cin >> bClave;
                    while(!Leer.eof()){
                        Leer>>_articulo>>_peso>>_areaProc>>_h>>_mi>>_s>>_d>>_me>>_a;
                        if(_codPartida == bClave){
                            encontrado = true;
                            cout << "CODIGO" << '\t' << "ARTICULO" << '\t' <<'\t' << "PESO" << endl;
                            cout << _codPartida << '\t' << _articulo << '\t' <<'\t' << _peso << endl;
                            cout << endl;
                        }
                        Leer>>_codPartida;
                    }
                    if (encontrado = false){
                        cout << "No se encuentra partida" << endl;
                    }
                    Leer.close();
                    break;  //salir de vista de los registros
                }

                }   //fin de switch de sub men
            }while(subOpcion != 3);      //condicion final de bucle de sub menu
            subOpcion = 0;      //reinicio de sub opcion
            break;  //salir de opcion PARTIDAS

        //***************************************PEDIDOS********************************************
        case 2:
            system("cls");  //limpiar pantalla
            do{     //bucle de sub menu
                cout << endl;
                cout << "---SUB MENU INGRESAR PEDIDOS---" << endl;
                cout << "1. Nuevo registro" <<endl;
                cout << "2. Consultar registro" <<endl;
                cout << "3. Salir" <<endl;
                cout << endl;
                cin >> subOpcion;
                switch(subOpcion){  //definir accion segun sub opcion elegida
                //**************************************NUEVO REGISTRO********************************

                case 1:{
                    system("cls");  //limpiar pantalla
                    Pedido reg;
                    cout << "Codigo de partida:" << endl;
                    int cod;
                    cin >> cod;
                    reg.defCod(cod);
                    cout << "Peso:" << endl;
                    double p;
                    cin >> p;
                    reg.defPeso(p);
                    cout << "Area cliente:" << endl;
                    int prov;
                    cin >> prov;
                    reg.defArea(prov);
                    cout << "Tiempo:" << endl;
                    cout << "HORA:" << endl;
                    int h;
                    cin >> h;
                    cout << "MINUTO:" << endl;
                    int mi;
                    cin >> mi;
                    cout << "SEGUNDO:" << endl;
                    int s;
                    cin >> s;
                    reg.defTiempo(h,mi,s);
                    cout << "Fecha:" << endl;
                    cout << "DIA:" << endl;
                    int d;
                    cin >> d;
                    cout << "MES:" << endl;
                    int me;
                    cin >> me;
                    cout << "ANIO:" << endl;
                    int a;
                    cin >> a;
                    reg.defFecha(d,me,a);
                    reg.regDatos();
                    break;}  //salir de nuevo registro
                //**************************************CONSULTA REGISTRO*****************************
                case 2:{
                    system("cls");  //limpiar pantalla
                    //DEFINIR VARIABLES TEMPORALES
                    int bClave, _codPedido, _codMaterial, _areaCliente, _h, _mi, _s, _d, _me, _a;
                    double _peso;
                    bool encontrado = false;
                    //LEER FICEHRO
                    ifstream Leer;
                    Leer.open("pedidos.txt");
                    Leer >> _codPedido;
                    cout << "Ingrese codigo de pedido" << endl;
                    cin >> bClave;
                    while(!Leer.eof()){
                        Leer>>_codMaterial>>_peso>>_areaCliente>>_h>>_mi>>_s>>_d>>_me>>_a;
                        if(_codPedido == bClave){
                            encontrado = true;
                            cout << "CODIGO" << '\t' << "PARTIDA" << '\t' <<'\t' << "PESO" << endl;
                            cout << _codPedido << '\t' << _codMaterial<< '\t' <<'\t' << _peso << endl;
                            cout << endl;
                        }
                        Leer>>_codPedido;
                    }
                    if (encontrado = false){
                        cout << "No se encuentra partida" << endl;
                    }
                    Leer.close();
                    break;  //salir de vista de los registros
                }   //FINDE CASE 2
                }   //fin de switch de sub menu
            }while(subOpcion != 3);      //condicion final de bucle de sub menu
            subOpcion = 0;      //reinicio de sub opcion
            break;  //salir de opcion PEDIDOS
        //****************************************************CONSULTAS**************************************************
        case 3:
            system("cls");  //limpiar pantalla
            do{     //bucle de sub menu
                //CONTAR CANTIDAD DE LÍNEAS DEL DOCUMENTO ANTES DE REALIZAR LAS CONSULTAS
                int cantidadRegistros = 0;  //cuenta numero de lineas en partidas.txt
                string line;
                ifstream file("partidas.txt");
                while (getline(file,line))
                    cantidadRegistros ++;
                file.close();

                //INICIO DE ENCABEZADOS
                cout << endl;
                cout << "---SUB MENU CONSULTAS---" << endl;
                cout << "1. Listado de stock (original)" <<endl;
                cout << "2. Stock ordenado por peso" <<endl;
                cout << "3. Cantidad total recibida por area proveedora" <<endl;
                cout << "4. Cantidad total abastecida por area cliente" <<endl;
                cout << "5. Salir" <<endl;
                cout << endl;
                cin >> subOpcion;
                switch(subOpcion){  //definir accion segun sub opcion elegida
                //***********************************************LISTADO DE STOCK*********************************
                case 1:{
                    system("cls");  //limpiar pantalla
                    Stock consulta(cantidadRegistros);
                    consulta.getPartidas();
                    break;}  //salir de nuevo registro
                //*****************************************STOCK POR PESO****************************************
                case 2:{
                    system("cls");  //limpiar pantalla
                    Stock consulta(cantidadRegistros);
                    consulta.ordenarPorPeso();
                    consulta.getPartidas();
                    break;  //salir de vista de los registros
                }
                //*****************************************PESO PROVEEDOR****************************************
                case 3:{
                    system("cls");  //limpiar pantalla
                    //DATOS DE AREA
                    //DEFINIR VARIABLES TEMPORALES
                    int bClave, _codArea;
                    double suma = 0;
                    string _nombreArea,_locacion,_jefeDeTurno;
                    bool encontrado1 = false;
                    //LEER FICEHRO
                    ifstream Leer1;
                    Leer1.open("proveedora.txt");
                    Leer1 >> _codArea;
                    cout << "Ingrese codigo de AREA" << endl;
                    cin >> bClave;
                    while(!Leer1.eof()){
                        Leer1>>_nombreArea>>_locacion>>_jefeDeTurno;
                        if(_codArea == bClave){
                            encontrado1 = true;
                            cout << "codAREA" << '\t' << "NOMBRE" << '\t' <<'\t' << "JEFE DE TURNO" << endl;
                            cout << _codArea << '\t' << _nombreArea << '\t' <<'\t' << _jefeDeTurno << endl;
                            cout << endl;

                            //LEER REGISTROS DE PARTIDAS
                            //DEFINIR VARIABLES TEMPORALES
                            int _codPartida, _areaProc, _h, _mi, _s, _d, _me, _a;
                            string _articulo;
                            double _peso;
                            bool encontrado = false;
                            //LEER FICEHRO
                            ifstream Leer;
                            Leer.open("partidas.txt");
                            Leer >> _codPartida;
                            cout << "codPART" << '\t' << "ARTICULO" << '\t' <<'\t' << "PESO" << endl;
                            while(!Leer.eof()){
                                Leer>>_articulo>>_peso>>_areaProc>>_h>>_mi>>_s>>_d>>_me>>_a;
                                if(_areaProc == bClave){
                                    encontrado = true;
                                    cout << _codPartida << '\t' << _articulo << '\t' <<'\t' << _peso << endl;
                                    cout << endl;
                                    suma += _peso;
                                }
                                Leer>>_codPartida;
                            }
                            if (encontrado = false){
                                cout << "No se encuentra area" << endl;
                            }
                            Leer.close();
                        }
                        Leer1>>_codArea;
                    }
                    if (encontrado1 = false){
                        cout << "No se encuentra area" << endl;
                    }
                    Leer1.close();
                    cout << endl;
                    cout << "El peso total es: " << suma << endl;
                    cout << endl;
                    break;  //salir de vista de los registros
                }
                //*****************************************PESO CLIENTE****************************************
                case 4:{
                    system("cls");  //limpiar pantalla
                    //DATOS DE AREA
                    //DEFINIR VARIABLES TEMPORALES
                    int bClave, _codArea;
                    double suma = 0;
                    string _nombreArea,_locacion,_prioridad;
                    bool encontrado1 = false;
                    //LEER FICEHRO
                    ifstream Leer1;
                    Leer1.open("cliente.txt");
                    Leer1 >> _codArea;
                    cout << "Ingrese codigo de AREA" << endl;
                    cin >> bClave;
                    while(!Leer1.eof()){
                        Leer1>>_nombreArea>>_locacion>>_prioridad;
                        if(_codArea == bClave){
                            encontrado1 = true;
                            cout << "codAREA" << '\t' << "NOMBRE" << '\t' <<'\t' << "PRIORIDAD" << endl;
                            cout << _codArea << '\t' << _nombreArea << '\t' <<'\t' << _prioridad << endl;
                            cout << endl;

                            //LEER REGISTROS DE PARTIDAS
                            //DEFINIR VARIABLES TEMPORALES
                            int _codPedido, _codMaterial, _areaCliente, _h, _mi, _s, _d, _me, _a;
                            double _peso;
                            bool encontrado = false;
                            //LEER FICEHRO
                            ifstream Leer;
                            Leer.open("pedidos.txt");
                            Leer >> _codPedido;
                            cout << "codPEDIDO" << '\t' << "codPARTIDA" << '\t' << "PESO" << endl;
                            while(!Leer.eof()){
                                Leer>>_codMaterial>>_peso>>_areaCliente>>_h>>_mi>>_s>>_d>>_me>>_a;
                                if(_areaCliente == bClave){
                                    encontrado = true;
                                    cout << _codPedido << '\t' << '\t' << _codMaterial << '\t' <<'\t' << _peso << endl;
                                    cout << endl;
                                    suma += _peso;
                                }
                                Leer>>_codPedido;
                            }
                            if (encontrado = false){
                                cout << "No se encuentra area" << endl;
                            }
                            Leer.close();
                        }
                        Leer1>>_codArea;
                    }
                    if (encontrado1 = false){
                        cout << "No se encuentra area" << endl;
                    }
                    Leer1.close();
                    cout << endl;
                    cout << "El peso total es: " << suma << endl;
                    cout << endl;
                    break;  //salir de vista de los registros
                }

                }   //fin de switch de sub menu
            }while(subOpcion != 5);      //condicion final de bucle de sub menu
            subOpcion = 0;      //reinicio de sub opcion
            break;  //salir de opcion
        //****************************************************OTROS**************************************************
        case 4:{
            system("cls");  //limpiar pantalla
            do{     //bucle de sub menu
                //INICIO DE ENCABEZADOS
                cout << endl;
                cout << "---SUB MENU OTROS---" << endl;
                cout << "1. Registrar Area Proveedora" <<endl;
                cout << "2. Registrar Area Cliente" <<endl;
                cout << "3. Salir" <<endl;
                cout << endl;
                cin >> subOpcion;
                switch(subOpcion){  //definir accion segun sub opcion elegida
                //***********************************************PROVEEDORA*********************************
                case 1:{
                    system("cls");  //limpiar pantalla
                    AreaProveedora reg;
                    cout << "Codigo de area:" << endl;
                    int cod;
                    cin >> cod;
                    reg.defCod(cod);
                    cout << "Nombre de area:" << endl;
                    string nomb;
                    cin >> nomb;
                    reg.defNombre(nomb);
                    cout << "Locacion de area:" << endl;
                    string loca;
                    cin >> loca;
                    reg.defLocacion(loca);
                    cout << "Jefe de turno de area:" << endl;
                    string jefe;
                    cin >> jefe;
                    reg.defJefe(jefe);
                    reg.regDatos();
                    break;}  //salir de nuevo registro
                //*************************************CLIENTE****************************************
                case 2:{
                    system("cls");  //limpiar pantalla
                    AreaCliente reg;
                    cout << "Codigo de area:" << endl;
                    int cod;
                    cin >> cod;
                    reg.defCod(cod);
                    cout << "Nombre de area:" << endl;
                    string nomb;
                    cin >> nomb;
                    reg.defNombre(nomb);
                    cout << "Locacion de area:" << endl;
                    string loca;
                    cin >> loca;
                    reg.defLocacion(loca);
                    cout << "Prioridad de area:" << endl;
                    int pri;
                    cin >> pri;
                    reg.defPrioridad(pri);
                    reg.regDatos();
                    break;  //salir de vista de los registros
                }

                }   //fin de switch de sub menu
            }while(subOpcion != 3);      //condicion final de bucle de sub menu
            subOpcion = 0;      //reinicio de sub opcion
            break;
        }
        }   //fin de switch de menu principal

    } while (opcion != 5);   //fin del bucle principal del programa

    return 0;
}
