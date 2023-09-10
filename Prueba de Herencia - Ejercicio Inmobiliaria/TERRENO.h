#ifndef TERRENO_H
#define TERRENO_H
#include "Inmobiliaria.h"

class Terreno: public Inmobiliaria{

private:

    char _mejorasDelTerreno; //  (‘A’: sin mejoras; ‘B’: asfalto; ‘C’: todos los servicios)

public:

    //CONSTRUCTOR
    Terreno();

    //CARGAR - MOSTRAR
    void Cargar();
    void Mostrar();

    //GETTERS
    char getMejoraDelTerreno();

    //SETTERS
    void setMejoraDelTerreno(char mejora);

};

#endif // TERRENO_H
