#ifndef CASA_H
#define CASA_H
#include "Inmobiliaria.h"

class Casa: public Inmobiliaria{

private:

    int _cantidadAmbientes;
    float _superficieConstruida;

public:

    //CONSTRUCTOR
    Casa();

    //CARGAR / MOSTRAR
    void Cargar();
    void Mostrar();

    //GETTERS
    int getCantidadAmbientes();
    float getSuperficieConstruida();

    //SETTERS
    void setCantidadAmbientes(int cantidadAmbientes);
    void setSuperficieConstruida(float superficieConstruida);

};

#endif // CASA_H
