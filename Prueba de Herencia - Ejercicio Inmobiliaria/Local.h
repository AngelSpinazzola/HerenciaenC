#ifndef LOCAL_H
#define LOCAL_H
#include "Inmobiliaria.h"

class Local: public Inmobiliaria{

private:

    int _zonaLocal;

public:

    //CONSTRUCTOR
    Local();
    //CARGAR / MOSTRAR
    void Cargar();
    void Mostrar();

    //GETTERS
    int getZonaLocal();
    //SETTERS
    void setZonaLocal(int zonaLocal);

};

#endif // LOCAL_H
