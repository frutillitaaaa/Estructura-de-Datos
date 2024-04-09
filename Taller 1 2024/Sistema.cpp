#include "Sistema.h"
#include <fstream>

Sistema::Sistema(){
    eventos = new Evento[0];
    numEventos = 0;
}

void Sistema::menu(){
    int opcion;
    do
    {
        cout<<"Menu"<<endl;
        cout<<"1. Crear evento"<<endl;
        cout<<"2. Registrar asistentes a un evento"<<endl;
        cout<<"3. Consultar la lista de asistentes a un evento"<<endl;
        cout<<"4. Generar informe de eventos"<<endl;
        cout<<"5. Generar informe de asistentes por evento"<<endl;
        cout<<"6. Generar estadísticas de asistencia"<<endl;
        cout<<"7. Generar detalles de asistentes"<<endl;
        cout<<"8. Generar informe de evento específico"<<endl;
        cout<<"9. Salir"<<endl;

        cout<<"Ingrese una opcion: ";
        cin>>opcion;
        cout<<opcion;
        
        switch (opcion)
        {
            case 1:
                crearEvento();
                break;
            case 2:
                agregarAsistentes();
                break;
            case 3:
                consultarListaAsistentes();
                break;
            case 4:
                generarInformeEventos();
                break;
            case 5:
                generarInformeAsistentes();
                break;
            /*
           case 6:
                generarEstadisticasAsistencia();
                break;
            case 7:
                generarDetallesAsistentes();
                break;
            case 8:
                generarInformeEventoEspecifico();
                break;
            */
            case 9:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 9);
}

void Sistema::crearEvento(){
    numEventos++;
    Evento* nuevoArray = new Evento[numEventos];

    for (int i = 0; i < numEventos; i++) {
        nuevoArray[i] = eventos[i];
    }

    string nombre;
    string duracion;
    string ubicacion;
    string tema;
    string tipo;
    try{
        cout << "Ingrese el nombre del evento: ";
        cin >> nombre;
        cout << "Ingrese la duracion del evento: ";
        cin >> duracion;
        cout << "Ingrese la ubicacion del evento: ";
        cin >> ubicacion;
        cout << "Ingrese el tema del evento: ";
        cin >> tema;
        cout << "Ingrese el tipo del evento: ";
        cin >> tipo;
        nuevoArray[numEventos] = Evento(nombre, duracion, ubicacion, tema, tipo);

        delete[] eventos; // Libera la memoria del array antiguo

        eventos = nuevoArray; // Asigna el nuevo array a eventos
    }catch(exception e){
        numEventos--;
        cout<<"Error al ingresar los datos"<<endl;
    }

}
void Sistema::agregarAsistentes() {
    
    string nombreEvento;
    cout << "Ingrese el nombre del evento: ";
    cin >> nombreEvento;

    Evento* evento = buscarEvento(nombreEvento);

    if (evento != NULL) {
        string nombre;
        int edad;
        string ocupacion;
        string institucion;
        string tipo;
        try{
        
        cout << "Ingrese el nombre del asistente: ";
        cin >> nombre;
        cout << "Ingrese la edad del asistente: ";
        cin >> edad;
        cout << "Ingrese la ocupacion del asistente: ";
        cin >> ocupacion;
        cout << "Ingrese la institucion o empresa del asistente: ";
        cin >> institucion;
        cout << "Ingrese el tipo de asistente: ";
        cin >> tipo;

        Asistente nuevoAsistente(nombre, edad, ocupacion, institucion, tipo);
        evento->agregarAsistente(nuevoAsistente);
        }catch(exception e ){
            cout<<"Error al ingresar los datos"<<endl;
        }
    } else {
        cout << "Evento no encontrado" << endl;
    }
 
    
}

void Sistema::consultarListaAsistentes(){
    string nombreEvento;
    cout << "Ingrese el nombre del evento: ";
    cin >> nombreEvento;

    Evento* evento = buscarEvento(nombreEvento);

    if (evento != NULL) {
        
        for(int i=0;i<evento->getNumAsistentes();i++){
            evento->getAsistentes()[i].mostrarDatos();
        }
    } else {
        cout << "Evento no encontrado" << endl;
    }

}
void Sistema::generarInformeEventos(){
    cout<<"Informe de eventos"<<endl;
    for (int i = 0; i < numEventos; i++)
    {
        cout<<"Evento "<<i+1<<endl;
        cout<<"Nombre: "<<eventos[i].getNombre()<<endl;
        cout<<"Duracion: "<<eventos[i].getDuracion()<<endl;
        cout<<"Ubicacion: "<<eventos[i].getUbicacion()<<endl;
        cout<<"Tema: "<<eventos[i].getTema()<<endl;
        cout<<"Tipo: "<<eventos[i].getTipo()<<endl;
    }
}
void Sistema::generarInformeAsistentes(){
    cout<<"Informe de asistentes"<<endl;
    for (int i = 0; i < numEventos; i++)
    {
        cout<<"Evento "<<i+1<<endl;
        for (int j = 0; j < eventos[i].getNumAsistentes(); j++)
        {
            cout<<"Asistente "<<j+1<<endl;
            cout<<"Nombre: "<<eventos[i].getAsistentes()[j].getNombre()<<endl;
            cout<<"Edad: "<<eventos[i].getAsistentes()[j].getEdad()<<endl;
            cout<<"Ocupacion: "<<eventos[i].getAsistentes()[j].getOcupacion()<<endl;
            cout<<"Institucion: "<<eventos[i].getAsistentes()[j].getInstitucion()<<endl;
            cout<<"Tipo: "<<eventos[i].getAsistentes()[j].getTipo()<<endl;
        }
    }
}


void Sistema::setEventos(Evento* _eventos){
    eventos = _eventos;
    numEventos +=1;
}

Evento* Sistema::getEventos(){
    return eventos;
}
void Sistema::setNumEventos(int _numEventos){
    numEventos = _numEventos;
}
int Sistema::getNumEventos(){
    return numEventos;
}
void Sistema::mostrarDatos(){
    for (int i = 0; i < numEventos; i++)
    {
        eventos[i].mostrarDatos();
    }
    
}


/*
void Sistema::generarInformeEventoEspecifico(string nombreEvento){
    cout<<"Informe de evento especifico"<<endl;
    for (int i = 0; i < numEventos; i++)
    {
        if (eventos[i].getNombre() == nombreEvento)
        {
            eventos[i].mostrarDatos();
        }
    }

   
};
*/


Evento* Sistema::buscarEvento(string nombre){
    for (int i = 0; i < numEventos; i++)
    {
        if (eventos[i].getNombre() == nombre)
        {
            return &eventos[i];
        }
    }
    return NULL;
}

void Sistema::guardarDatos() {
}

void Sistema::cargarDatos() {
   
}
