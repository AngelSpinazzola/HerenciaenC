#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include "Inmobiliaria.h"

class Departamento: public Inmobiliaria{

private:

    int _cantAmbientes;
    bool _instalacionComplementaria;

public:

    //CONSTRUCTOR
    Departamento();
    //CARGAR / MOSTRAR
    void Cargar();
    void Mostrar();

    //GETTERS
    int getCantAmbientes();
    bool getInstalacionComplementaria();
    //SETTERS
    void setCantAmbientes(int cantAmbientes);
    void setInstalacionComplementaria(bool instalacionComplementaria);

};

#endif // DEPARTAMENTO_H
