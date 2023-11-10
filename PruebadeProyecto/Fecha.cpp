#include "Fecha.h"
#include <string>
#include <ctime>

    void Fecha::setDia(int dia){
        _dia=dia;
    }
    
    void Fecha::setMes(int mes){
        _mes=mes;
    }
    
    void Fecha::setAnio(int anio){
        _anio=anio;
    }

    void Fecha::setSegundos(int segundos){
        _segundos = segundos ;
    }   
    void Fecha::setMinutos(int minutos){
        _minutos=minutos;
    }
    void Fecha::setHora(int hora){
        _hora=hora;
    }


    int Fecha::getDia(){
        return _dia;
    }
    
    int Fecha::getMes(){
        return _mes;
    }    
    
    int Fecha:: getAnio(){
        return _anio;
    }

    int Fecha::getSegundos(){
        return _segundos;
    }
    int Fecha::getMinutos(){
        return _minutos;
    }    
    int Fecha::getHora(){
        return _hora;
    }

    Fecha::Fecha(){

    }
     
    Fecha::Fecha(){
        time_t t = time(NULL);
       struct tm *f = localtime(&t);
        
        _dia = f->tm_mday; // Indirecciona f y accede a tm_mday
        _mes = f->tm_mon + 1; // Indirecciona f y accede a tm_mon
        _anio = f->tm_year + 1900;
        

        _segundos = f->tm_sec; // Indirecciona f y accede a tm_mday
        _minutos = f->tm_min; 
        _hora = f->tm_hour;

    }

    Fecha::Fecha (int dia, int mes, int anio,int segundos,int minutos, int hora){
        setDia(dia);
        setMes(mes);
        setAnio(anio);
        setSegundos(segundos);
        setMinutos(minutos);
        setHora(hora);
    }


    std::string Fecha:: to_string(){
        std::string ValorADevolver;
        ValorADevolver = std::to_string(_dia) + "/" + std::to_string(_mes) + "/" + std::to_string(_anio);
        return ValorADevolver;
    }

    std::string Fecha::to_String(){
        std::string valorADevolver;
        valorADevolver= std::to_string(_hora) + ":" + std::to_string(_minutos);
        return valorADevolver;
    }