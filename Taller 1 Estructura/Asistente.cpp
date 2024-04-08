#include "Asistente.h"

Asistente::Asistente(string _nombre, int _edad, string _ocupacion, string _institucion, string _tipo){
    nombre = _nombre;
    edad = _edad;
    ocupacion = _ocupacion;
    institucion = _institucion;
    tipo = _tipo;
};
Asistente::Asistente(){
    nombre = "";
    edad = 0;
    ocupacion = "";
    institucion = "";
    tipo = "";
};

void Asistente::setNombre(string _nombre){
    nombre = _nombre;
};

string Asistente::getNombre(){
    return nombre;
};

void Asistente::setEdad(int _edad){
    edad = _edad;
};

int Asistente::getEdad(){
    return edad;
};

void Asistente::setOcupacion(string _ocupacion){
    ocupacion = _ocupacion;
};

string Asistente::getOcupacion(){
    return ocupacion;
};

void Asistente::setInstitucion(string _institucion){
    institucion = _institucion;
};

string Asistente::getInstitucion(){
    return institucion;
};

void Asistente::setTipo(string _tipo){
    tipo = _tipo;
};

string Asistente::getTipo(){
    return tipo;
};

void Asistente::mostrarDatos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Ocupacion: "<<ocupacion<<endl;
    cout<<"Institucion: "<<institucion<<endl;
    cout<<"Tipo: "<<tipo<<endl;
};





