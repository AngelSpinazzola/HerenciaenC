#include <iostream>
#include <clocale>
#include "Departamento.h"
using namespace std;

//CONSTRUCTOR
Departamento::Departamento(){
    _cantAmbientes = 0;
    _instalacionComplementaria = false;
}

//GETTERS
int Departamento::getCantAmbientes(){
    return _cantAmbientes;
}
bool Departamento::getInstalacionComplementaria(){
    return _instalacionComplementaria;
}

//SETTERS
void Departamento::setCantAmbientes(int cantAmbientes){
    _cantAmbientes = cantAmbientes;
}
void Departamento::setInstalacionComplementaria(bool instalacionComplementaria){
    _instalacionComplementaria = instalacionComplementaria;
}

//CARGAR / MOSTRAR
void Departamento::Cargar(){
    cout << "BIENVENIDO" << endl;
    cout << "REGISTRO DEPARTAMENTO" << endl;
    Inmobiliaria::Cargar();
    cout << "Cantidad de ambientes: ";
    cin >> _cantAmbientes;
    cout << "Dispone de instalacion complementaria? (1: SI; 0: NO) : ";
    cin >> _instalacionComplementaria;
}
void Departamento::Mostrar(){
    cout  << "DEPARTAMENTO" << endl;
    Inmobiliaria::Mostrar();
    cout << "Cantidad de ambientes: " << _cantAmbientes << endl;
    if(_instalacionComplementaria == true){
        cout << "Dispone de instalacion complementaria" << endl;
    }
    else{
        cout << "No dispone de instalacion complementaria" << endl;
    }
}
