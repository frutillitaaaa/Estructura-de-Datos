#include <iostream>
#include <stdlib.h>
#include <vector>

#include "Conferencia.h"
#include "Evento.h"


Conferencia::Conferencia(){

}

Conferencia::Conferencia(std::string nombreEvento,int duracion, std::string ubicacion, int numeroMaximoAsistentes, std::string fecha, std::string nombrePonente):Evento(nombreEvento,duracion,ubicacion,numeroMaximoAsistentes,fecha){
    this->nombrePonente = nombrePonente;
}

