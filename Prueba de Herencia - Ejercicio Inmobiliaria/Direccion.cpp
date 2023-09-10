#include <iostream>
#include <clocale>
#include <string.h>
#include "Direccion.h"
using namespace std;

Direccion::Direccion()
{
    _numeroAltura = 0;
    _codigoPostal = 0;
    strcpy(_piso, "CERO");
    strcpy(_calle, "NULL");
    strcpy(_localidad, "NULL");
}

//GETTERS
int Direccion::getNumeroAltura(){
    return _numeroAltura;
}
int Direccion::getCodigoPostal(){
    return _codigoPostal;
}
const char* Direccion::getPiso(){
    return _piso;
}
const char* Direccion::getCalle(){
    return _calle;
}
const char* Direccion::getLocalidad(){
    return _localidad;
}

//SETTERS
void Direccion::setNumeroAltura(int numeroAltura){
    _numeroAltura = numeroAltura;
}
void Direccion::setCodigoPostal(int codigoPostal){
    _codigoPostal = codigoPostal;
}
void Direccion::setPiso(const char *piso){
    strcpy(_piso, piso);
}
void Direccion::setCalle(const char *calle){
    strcpy(_calle, calle);
}
void Direccion::setLocalidad(const char *localidad){
    strcpy(_localidad, localidad);
}

//METODOS CARGAR / MOSTRAR

void Direccion::Cargar(){
    cout << "LOCALIDAD: ";
    cargarCadena(_localidad, 49);
    cout << "CALLE: ";
    cargarCadena(_calle, 49);
    cout << "ALTURA: ";
    cin >> _numeroAltura;
    cout << "CODIGO POSTAL: ";
    cin >> _codigoPostal;
    cout << "PISO: ";
    cargarCadena(_piso, 29);
}

void Direccion::Mostrar(){
    cout << "LOCALIDAD: " << _localidad << endl;
    cout << "CALLE: " << _calle << endl;
    cout << "ALTURA: " << _numeroAltura << endl;
    cout << "CODIGO POSTAL: " << _codigoPostal << endl;
    cout << "PISO: " << _piso << endl;
}
