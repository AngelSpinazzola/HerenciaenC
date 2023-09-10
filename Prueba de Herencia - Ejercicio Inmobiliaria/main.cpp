#include <iostream>
#include "Inmobiliaria.h"
#include "Casa.h"
#include "Departamento.h"
#include "Local.h"
#include "Terreno.h"

using namespace std;

int main()
{
    Casa casa;
    Departamento depto;
    Local local;
    Terreno terreno;

    casa.Cargar();
    depto.Cargar();
    local.Cargar();
    terreno.Cargar();

    casa.Mostrar();
    depto.Mostrar();
    local.Mostrar();
    terreno.Mostrar();

    return 0;
}
