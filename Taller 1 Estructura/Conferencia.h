#ifndef CONFERENCIA_H
#define CONFERENCIA_H

#include <iostream>
#include "Evento.h"


class Conferencia : public Evento{

    private:
        std::string nombrePonente;
        
    public:
        Conferencia();
        Conferencia(std::string nombreEvento,int duracion, std::string ubicacion, int numeroMaximoAsistentes, std::string fecha, std::string nombrePonente);
        
};

#endif