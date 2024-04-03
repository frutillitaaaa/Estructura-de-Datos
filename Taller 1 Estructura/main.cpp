#include <iostream>
#include <stdlib.h>

#include "Evento.h"
#include "Concierto.h"
#include "Conferencia.h"


int main(int argc, char const *argv[])
{
    printf("hola");
    
    Evento* evento = new Evento("hola",2,"La Serena",30,"hoy");
    std::cout<<evento->getNombreEvento()<< std::endl;
    delete evento;
    
   
    system("pause");

    return 0;
}
