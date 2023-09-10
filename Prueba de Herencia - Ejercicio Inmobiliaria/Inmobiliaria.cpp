#include <iostream>
#include <clocale>
#include "Inmobiliaria.h"

using namespace std;

Inmobiliaria::Inmobiliaria()
{
    //ctor
}

//CARGAR / MOSTRAR
void Inmobiliaria::Cargar(){
    _direccionInmueble.Cargar();
    cout << "FECHA DE INGRESO" << endl;
    _fechaIngreso.Cargar();
    cout << "FECHA DE OPERACION" << endl;
    _fechaOperacion.Cargar();
    cout << "Superficie total: ";
    cin >> _superficieTotal;
    cout << "Tipo de operacion (1: Venta; 2: Alquiler: ";
    cin >> _tipoOperacion;
}
void Inmobiliaria::Mostrar(){
    cout << endl;
    _direccionInmueble.Mostrar();
    cout << "Fecha de ingreso: ";
    _fechaIngreso.Mostrar();
    cout << "Fecha de operacion: ";
    _fechaOperacion.Mostrar();
    cout << "Superficie total: " << _superficieTotal << endl;
    cout << "Tipo de operacion: " << _tipoOperacion << endl;
}
