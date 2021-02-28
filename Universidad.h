#include "Facultad.h"
#include <list>

struct Universidad{
    //datos
    string Nombre;
    list<Facultad> Facultades;
    //operaciones
    string ObtenerNombre();
    unsigned int UTotalEst();
    void UCambiarNombre(string Nnom);
    bool AgregarFacultad(string NomFac);
    bool EliminarFacultad(string NomFac);
    void AgregarCarrera(string NomFac, string NomCarrera, unsigned int NumEst);
    bool EliminarCarrera(string NomCarrera);
    void ImprimirUniversidad();
};