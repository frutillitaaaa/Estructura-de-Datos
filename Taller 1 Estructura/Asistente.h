#ifndef ASISTENTE_H
#define ASISTENTE_H

#include <iostream>

using namespace std;

class Asistente {
    private:
        string nombre;
        int edad;
        string ocupacion;
        string institucion;
        string tipo;
    public:
        Asistente(string, int, string, string, string);
        Asistente();
        void setNombre(string);
        string getNombre();
        void setEdad(int);
        int getEdad();
        void setOcupacion(string);
        string getOcupacion();
        void setInstitucion(string);
        string getInstitucion();
        void setTipo(string);
        string getTipo();
        void mostrarDatos();

};

#endif