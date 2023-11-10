#include "Profesionales.h"

using namespace std;


 void Profesionales:: setEspecialidad (std::string especialidad){
    _especialidad = especialidad; 
 }    
 void Profesionales:: setNumMatricula (int matricula){
    _Nummatricula=matricula;
 }    
 void Profesionales:: setDiasAtencion (Fecha dias){
        _diasAtencion = dias;
 }
 void Profesionales:: setHorarioAtencion (Fecha horarios){
    _horarioAtencion=horarios;
 }

 std::string Profesionales:: getEspecialidad() const{
    return _especialidad;
 }  
 int Profesionales:: getNumMatricula() const{
    return _Nummatricula;
 } 
 Fecha Profesionales:: getDiasAtencion(){
    return _diasAtencion;
 }
 Fecha Profesionales:: getHorariosAtencion(){
    return _horarioAtencion;
 }