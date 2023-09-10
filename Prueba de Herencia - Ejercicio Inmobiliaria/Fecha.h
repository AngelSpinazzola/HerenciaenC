#ifndef FECHA_H
#define FECHA_H

class Fecha{
public:
    Fecha();
    void Cargar();
    void Mostrar();

    //GETS
    int getDia();
    int getMes();
    int getAnio();

    //SETS
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

private:
    int _dia;
    int _mes;
    int _anio;
};

#endif // FECHA_H
