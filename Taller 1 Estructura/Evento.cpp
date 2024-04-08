#include "Evento.h"

Evento::Evento(string _nombre, string _duracion, string _ubicacion, string _tema,string _tipo){
    nombre = _nombre;
    duracion = _duracion;
    ubicacion = _ubicacion;
    tema = _tema;
    tipo = _tipo;
};
Evento::Evento(){
    nombre = "";
    duracion = "";
    ubicacion = "";
    tema = "";
};

void Evento::mostrarAsistentes(){
    string asistente = "";
    for (int i = 0; i < numAsistentes; i++)
    {
        asistentes[i].mostrarDatos();
    }
    
}

void Evento::setTipo(string _tipo){
    tipo = _tipo;
}

string Evento::getTipo(){
    return tipo;
}

void Evento::setNombre(string _nombre){
    nombre = _nombre;
}

string Evento::getNombre(){
    return nombre;
}

void Evento::setDuracion(string _duracion){
    duracion = _duracion;
}

string Evento::getDuracion(){
    return duracion;
}

void Evento::setUbicacion(string _ubicacion){
    ubicacion = _ubicacion;
}

string Evento::getUbicacion(){
    return ubicacion;
}

void Evento::setTema(string _tema){
    tema = _tema;
}

string Evento::getTema(){
    return tema;
}

void Evento::setAsistentes(Asistente* _asistentes,int _numAsistentes){
    asistentes = _asistentes;
    numAsistentes = _numAsistentes;
}

Asistente* Evento::getAsistentes(){
    return asistentes;
}

void Evento::setNumAsistentes(int _numAsistentes){
    numAsistentes = _numAsistentes;
}

int Evento::getNumAsistentes(){
    return numAsistentes;
}

void Evento::mostrarDatos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Duracion: "<<duracion<<endl;
    cout<<"Ubicacion: "<<ubicacion<<endl;
    cout<<"Tema: "<<tema<<endl;
    cout<<"Asistentes: "<<endl;
    for (int i = 0; i < numAsistentes; i++)
    {
        cout<<"Asistente "<<i+1<<": "<<endl;
        asistentes[i].mostrarDatos();
       
    }
    
}
void Evento::agregarAsistente(Asistente asistente){
    Asistente* temp = new Asistente[numAsistentes+1];
    for (int i = 0; i < numAsistentes; i++)
    {
        temp[i] = asistentes[i];
    }
    temp[numAsistentes] = asistente;
    numAsistentes++;
    asistentes = temp;
}




