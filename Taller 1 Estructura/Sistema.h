#include "Evento.h"

class Sistema{
    private:
        Evento* eventos;
        int numEventos;
    public:
        Sistema();
        void setEventos(Evento*);
        Evento* getEventos();
        void setNumEventos(int);
        int getNumEventos();
        void mostrarDatos();
        void generarInformeEventos(); // Añade un método para generar el informe de eventos
        void generarInformeAsistentes(); // Añade un método para generar el informe de asistentes
        void generarEstadisticasAsistencia(); // Añade un método para generar estadísticas de asistencia
        void generarDetallesAsistentes(); // Añade un método para generar detalles sobre los asistentes
        Evento* buscarEvento(string); // Añade un método para buscar un evento por nombre
        void menu(); // Añade un método para mostrar el menú
        void crearEvento(); // Añade un método para crear eventos
        void agregarAsistentes(); // Añade un método para crear asistentes
        void registrarAsistentes(); // Añade un método para registrar la asistencia de un asistente
        void consultarListaAsistentes(); // Añade un método para consultar la asistencia de un asistente
        void generarInformeEventoEspecifico(); // Añade un método para generar un informe de un evento específico
        void guardarDatos(); // Añade un método para guardar los datos
        void cargarDatos(); // Añade un método para cargar los datos
        
};
