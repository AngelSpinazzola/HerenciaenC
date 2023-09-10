#ifndef DIRECCION_H
#define DIRECCION_H
#include "CargarCadena.h"

class Direccion{
private:

    int _numeroAltura;
    int _codigoPostal;
    char _piso[30];
    char _calle[50];
    char _localidad[50];

public:

    //CONSTRUCTOR
    Direccion();

    //CARGAR / MOSTRAR
    void Mostrar();
    void Cargar();

    //GETS
    int getNumeroAltura();
    int getCodigoPostal();
    const char* getPiso();
    const char* getCalle();
    const char* getLocalidad();

    //SETS
    void setNumeroAltura(int numeroAltura);
    void setCodigoPostal(int codigoPostal);
    void setPiso(const char *piso);
    void setCalle(const char *calle);
    void setLocalidad(const char *localidad);

};

#endif // DIRECCION_H
