#include <iostream>
#include "Fecha.h"
#include "Tiempo.h"
#include "Fardo.h"
#include "Partida.h"
#include "Pedido.h"

using namespace std;

int main()
{
    //VARIABLES GLOBALES
    unsigned int pedidosCreados = 0;    //contador de pedidos creados
    unsigned int maxPedidos = 10;
    int opcion; //opcion elegida por el usuario
    int subOpcion;  //sub opcion elegida por el usuario
    //ARREGLO DE OBJETOS
    Pedido *pedidos = new Pedido[maxPedidos];
    //BUBLE PRINCIPAL DEL PROGRAMA
    do {
        cout << endl;
        cout << "-----MENU PRINCIPAL-----"<<endl;
        cout << "1. Partidas"<<endl;
        cout << "2. Fardos" << endl;
        cout << "3. Pedidos" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;
        switch(opcion){ //definir accion segun opcion elegida

        //**************************PARTIDAS*******************************
        case 1:
            do{     //bucle de sub menu
                cout << endl;
                cout << "---SUB MENU PARTIDAS---" << endl;
                cout << "1. Nuevo registro" <<endl;
                cout << "2. Ver todos los registros" <<endl;
                cout << "3. Salir" <<endl;
                cin >> subOpcion;
                switch(subOpcion){  //definir accion segun sub opcion elegida
                //**********NUEVO REGISTRO****************
                case 1:

                    break;  //salir de nuevo registro
                //********VISTA DE TODOS LOS REGISTROS*********
                case 2:

                    break;  //salir de vista de los registros
                }   //fin de switch de sub menu
            }while(subOpcion != 3);      //condicion final de bucle de sub menu
            subOpcion = 0;      //reinicio de sub opcion
            break;  //salir de opcion PARTIDAS

        //**************************FARDOS*************************************
        case 2:
            do{     //bucle de sub menu
                cout << endl;
                cout << "---SUB MENU PARTIDAS---" << endl;
                cout << "1. Nuevo registro" <<endl;
                cout << "2. Ver todos los registros" <<endl;
                cout << "3. Salir" <<endl;
                cin >> subOpcion;
                switch(subOpcion){  //definir accion segun sub opcion elegida
                //**********NUEVO REGISTRO****************
                case 1:
                    cout << "Ingresar partida de origen" << endl;
                    break;  //salir de nuevo registro
                //********VISTA DE TODOS LOS REGISTROS*********
                case 2:

                    break;  //salir de vista de los registros
                }   //fin de switch de sub menu
            }while(subOpcion != 3);      //condicion final de bucle de sub menu
            subOpcion = 0;      //reinicio de sub opcion
            break;  //salir de opcion FARDOS

        //********************************PEDIDOS***************************************
        case 3:
            do{     //bucle de sub menu
                cout << endl;
                cout << "---SUB MENU PARTIDAS---" << endl;
                cout << "1. Nuevo registro" <<endl;
                cout << "2. Ver todos los registros" <<endl;
                cout << "3. Salir" <<endl;
                cin >> subOpcion;
                switch(subOpcion){  //definir accion segun sub opcion elegida
                //**********NUEVO REGISTRO****************
                case 1:
                    if(pedidosCreados<maxPedidos){
                        cout << "Area de destino:" << endl;
                        string dest;
                        cin >> dest;
                        pedidos[pedidosCreados].defDestino(dest);
                        cout << "Operario encargado:" << endl;
                        string o;
                        cin >> o;
                        pedidos[pedidosCreados].defOperario(o);
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
                        pedidos[pedidosCreados].defTiempoEmision(h,mi,s);
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
                        pedidos[pedidosCreados].defFechaEmision(d,me,a);
                        pedidosCreados++;
                    }
                    else
                        cout << "Se supero el limite de " << maxPedidos << " registros para pedidos" << endl;
                    break;  //salir de nuevo registro
                //********VISTA DE TODOS LOS REGISTROS*********
                case 2:
                    cout << "CODIGO\tDESTINO\tOPERARIO\tFECHA DE EMISION\tHORA DE EMISION"<<endl;
                    for (int i=0; i<pedidosCreados;i++){
                        cout << pedidos[i].getCodigoPedido() <<"\t"<<pedidos[i].getAreaDeDestino() <<"\t"<<pedidos[i].getOperarioEncargado() <<"\t\t"<<pedidos[i].getFechaEmision("DD")<<"/"<<pedidos[i].getFechaEmision("MM")<<"/"<<pedidos[i].getFechaEmision("AA")<<"\t\t"<<pedidos[i].getTiempoEmision("HH") <<":"<<pedidos[i].getTiempoEmision("MM") <<":"<<pedidos[i].getTiempoEmision("SS") <<endl;
                    }

                    break;  //salir de vista de los registros
                }   //fin de switch de sub menu
            }while(subOpcion != 3);      //condicion final de bucle de sub menu
            subOpcion = 0;      //reinicio de sub opcion
            break;  //salir de opcion PEDIDOS
        }   //fin de switch de menu principal

    } while (opcion != 4);   //fin del bucle principal del programa
    delete [] pedidos;
    return 0;
}
