#include <iostream>
#include <stdlib.h>


#include "Concierto.h"
#include "Evento.h"

Concierto::Concierto(){

}

Concierto::Concierto(std::string nombreEvento,int duracion, std::string ubicacion, int numeroMaximoAsistentes, std::string fecha, std::string artista):Evento(nombreEvento,duracion,ubicacion,numeroMaximoAsistentes,fecha){
    this->artista = artista;
}




