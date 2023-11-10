#pragma once
#include <string>

class Fecha
{
private:
    int _dia,_mes,_anio;
    int _segundos, _minutos, _hora;
public:
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    void setSegundos (int segundos);    
    void setMinutos (int minutos);
    void setHora(int hora);

    int getDia();
    int getMes();    
    int getAnio();
    int getSegundos();
    int getMinutos();
    int getHora();


    Fecha();
    Fecha();
    Fecha (int dia, int mes, int anio, int segundos,int minutos, int hora);
    std::string to_string();
    std::string to_String();
};
