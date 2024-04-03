#ifndef EVENTO_H
#define EVENTO_H

#include <iostream>

class Evento {

    private:
        std::string nombreEvento;
        int duracion;
        std::string ubicacion;
        int numeroMaximoAsistentes;
        std::string fecha;

        //Evento* evento = nullptr;
        //Asistente* asistente;

    public:
        Evento();
        Evento(std::string nombreEvento,int duracion, std::string ubicacion, int numeroMaximoAsistentes, std::string fecha); //constructor
        std::string getNombreEvento() const;
        void agregarEvento(std::string tipoDeEvento, std::string nombreEvento, int duracion, std::string ubicacion, int numeroMaximoAsistentes, std::string fecha, std::string elementoAdicional1);

};

#endif
