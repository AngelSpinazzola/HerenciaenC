#include <iostream>
#include <clocale>
#include "Fecha.h"
using namespace std;

Fecha::Fecha()
{
    _dia = 1;
    _mes = 1;
    _anio = 2023;
}
void Fecha::Cargar(){
    int dia, mes, anio;
    bool correcto = false;

    do{
    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> anio;

    if(dia > 1 && dia < 32 && mes > 0 && mes < 13 && anio > 0){
        _dia = dia;
        _mes = mes;
        _anio = anio;
        correcto = true;
    }
    else{
        cout << "Fecha invalida" << endl;
    }
    }while(!correcto);
}

void Fecha::Mostrar(){
    cout <<  _dia << "/" << _mes << "/" << _anio << endl;
}
//GETS
int Fecha::getDia(){
    return _dia;
}
int Fecha::getMes(){
    return _mes;
}
int Fecha::getAnio(){
    return _anio;
}

//SETS
void Fecha::setDia(int dia){
    if(dia > 0 && dia < 32){
        _dia = dia;
    }
}
void Fecha::setMes(int mes){
    if(mes > 0 && mes < 13){
        _mes = mes;
    }
}
void Fecha::setAnio(int anio){
    if(anio > 0){
        _anio = anio;
    }
}

