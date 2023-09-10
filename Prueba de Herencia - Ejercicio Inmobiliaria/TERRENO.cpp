#include <iostream>
#include <clocale>
#include "Terreno.h"
using namespace std;

//CONSTRUCTOR
Terreno::Terreno(){

}

//GETTERS
char Terreno::getMejoraDelTerreno(){
    return _mejorasDelTerreno;
}

//SETTERS
void Terreno::setMejoraDelTerreno(char mejora){
    _mejorasDelTerreno = mejora;
}

//CARGAR - MOSTRAR
void Terreno::Cargar(){
    cout << "BIENVENIDO AL REGISTRO DE TERRENOS" << endl;
    Inmobiliaria::Cargar();
    cout << "Posee mejoras?  (‘A’: sin mejoras; ‘B’: asfalto; ‘C’: todos los servicios): ";
    cin >> _mejorasDelTerreno;
}
void Terreno::Mostrar(){
    cout << "TERRENO REGISTRADO" << endl;
    Inmobiliaria::Mostrar();
    switch(_mejorasDelTerreno){
        case 'A': cout << "SIN MEJORAS EN EL TERRENO" << endl; break;
        case 'B': cout << "CON MEJORAS DE ASFALTO" << endl; break;
        case 'C': cout << "CON TODOS LOS SERVICIOS DISPONIBLES" << endl; break;
    }
}
