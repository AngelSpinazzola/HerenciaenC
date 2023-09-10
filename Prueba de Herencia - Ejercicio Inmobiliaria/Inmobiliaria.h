#ifndef INMOBILIARIA_H
#define INMOBILIARIA_H
#include "Direccion.h"
#include "Fecha.h"

class Inmobiliaria{

protected:

    Direccion _direccionInmueble;
    Fecha _fechaIngreso;
    Fecha _fechaOperacion;
    float _superficieTotal;
    int _tipoOperacion; // 1 VENTA - 2 ALQUILER

public:
    Inmobiliaria();
    void Cargar();
    void Mostrar();
    //GETTERS
    void getDireccion();

};

#endif // INMOBILIARIA_H
