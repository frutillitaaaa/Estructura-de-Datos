#include <iostream>
#include <stdlib.h>
#include <vector>

#include "Evento.h"
#include "Conferencia.h"
#include "Concierto.h"


Evento::Evento(){

}

Evento::Evento(const std::string nombreEvento,int duracion, std::string ubicacion, int numeroMaximoAsistentes, std::string fecha){

    this->nombreEvento = nombreEvento;
    this->duracion = duracion;
    this->ubicacion = ubicacion;
    this->numeroMaximoAsistentes = numeroMaximoAsistentes;
    this->fecha = fecha;
}

std::string Evento::getNombreEvento() const {
    return nombreEvento;
}

void agregarEvento(std::string tipoDeEvento,std::string nombreEvento, int duracion, std::string ubicacion, int numeroMaximoAsistentes, std::string fecha, std::string elementoAdicional1, std::vector<Evento*> listaEventos){
    Evento* evento = nullptr;

    if(tipoDeEvento == "Conferencia"){
        evento = new Conferencia(nombreEvento,duracion,ubicacion,numeroMaximoAsistentes,fecha,elementoAdicional1);
    } else if(tipoDeEvento == "Concierto"){
        evento = new Concierto(nombreEvento,duracion,ubicacion,numeroMaximoAsistentes,fecha,elementoAdicional1);
    }

    listaEventos.push_back(evento);
    

}


