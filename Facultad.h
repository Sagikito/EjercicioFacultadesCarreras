#include "Carrera.h"
#include <vector>

struct Facultad{
    //datos
    string Nombre;
    vector<Carrera> Carreras;
    //constructor
    Facultad(string x);
    //operaciones
    string FObtenerNombre();
    unsigned int FTotalEst();
    void CambiarNombre(string Nnom);
    bool AgregarCarrera(string NomCarrera, unsigned int NumEst);
    bool EliminarCarrera(string NomCarrera);
    void ImprimirFacultad();
};

