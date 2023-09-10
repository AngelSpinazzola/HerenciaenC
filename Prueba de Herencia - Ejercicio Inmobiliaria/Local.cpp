#include <iostream>
#include <clocale>
#include "Local.h"
using namespace std;

//CONSTRUCTOR
Local::Local()
{
    _zonaLocal = 0;
}

//GETTERS
int Local::getZonaLocal(){
    return _zonaLocal;
}

//SETTERS
void Local::setZonaLocal(int zonaLocal){
    _zonaLocal = zonaLocal;
}

//CARGAR / MOSTRAR
void Local::Cargar(){
    cout << "BIENVENIDO AL REGISTRO DE LOCAL" << endl;
    Inmobiliaria::Cargar();
    cout << "Indique la zona (1: comercial; 2 mixta; 3 industrial): ";
    cin >> _zonaLocal;
    cout << endl;
}
void Local::Mostrar(){
    cout << "LOCAL REGISTRADO" << endl;
    Inmobiliaria::Mostrar();
    switch(_zonaLocal){
        case 1: cout << "Zona COMERCIAL" << endl; break;
        case 2: cout << "Zona MIXTA" << endl; break;
        case 3: cout << "Zona INDUSTRIAL" << endl; break;
        case 0: cout << "Zona INDEFINIDA" << endl; break;
    }
}
