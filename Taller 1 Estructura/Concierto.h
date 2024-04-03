#ifndef CONCIERTO_H
#define CONCIERTO_H

#include <iostream>
#include "Evento.h"


class Concierto : public Evento{

    private:
        std:: string artista;

    public:
        Concierto();
        Concierto(std::string nombreEvento,int duracion, std::string ubicacion, int numeroMaximoAsistentes, std::string fecha, std::string artista);
       

};

#endif