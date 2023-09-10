#include <iostream>
#include <clocale>
#include "Casa.h"
using namespace std;

//CONSTRUCTOR

Casa::Casa()
{
    _cantidadAmbientes = 0;
    _superficieTotal = 0;
}

//GETTERS

int Casa::getCantidadAmbientes(){
    return _cantidadAmbientes;
}
float Casa::getSuperficieConstruida(){
    return _superficieTotal;
}

//SETTERS

void Casa::setCantidadAmbientes(int cantidadAmbientes){
    _cantidadAmbientes = cantidadAmbientes;
}
void Casa::setSuperficieConstruida(float superficieConstruida){
    _superficieConstruida = superficieConstruida;
}

//CARGAR / MOSTRAR

void Casa::Cargar(){
    cout << "BIENVENIDO" << endl;
    cout << "REGISTRO DE CASA." << endl;
    Inmobiliaria::Cargar();
    cout << "CANTIDAD DE AMBIENTES: ";
    cin >> _cantidadAmbientes;
    cout << "SUPERFICIE CONSTRUIDA: ";
    cin >> _superficieConstruida;
}

void Casa::Mostrar(){
    cout << endl << "CASA" << endl;
    Inmobiliaria::Mostrar();
    cout << "CANTIDAD DE AMBIENTES: " << _cantidadAmbientes << endl;
    cout << "SUPERFICIE CONSTRUIDA: " << _superficieConstruida << endl;
}

