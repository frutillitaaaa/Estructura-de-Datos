#include "Asistente.cpp"

class Evento{
    private:
        string nombre;
        string duracion;
        string ubicacion;
        string tema;
        string tipo;
        Asistente* asistentes;
        int numAsistentes;
    public:
        Evento(string, string, string, string,string);
        Evento();
        void setNombre(string);
        string getNombre();
        void setDuracion(string);
        string getDuracion();
        void setUbicacion(string);
        string getUbicacion();
        void setTema(string);
        string getTema();
        void setTipo(string);
        string getTipo();
        void setAsistentes(Asistente*,int);
        Asistente* getAsistentes();
        void setNumAsistentes(int);
        int getNumAsistentes();
        void mostrarDatos();
        void agregarAsistente(Asistente);
        void mostrarAsistentes();
};
