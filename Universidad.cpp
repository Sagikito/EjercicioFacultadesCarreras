#include "Universidad.h"

string Universidad::ObtenerNombre(){
    return Nombre;
}

unsigned int Universidad::UTotalEst()
{
    unsigned int total = 0;
    list<Facultad>::iterator it;
    for(it = Facultades.begin(); it!=Facultades.end(); it++)
        total += it->FTotalEst();
    return total;
}

void Universidad::UCambiarNombre(string Nnom){
    Nombre = Nnom;
}

bool Universidad::AgregarFacultad(string NomFac)
{
    list<Facultad>::iterator it;
    for(it = Facultades.begin(); it != Facultades.end(); it++)
        if(it->FObtenerNombre() == NomFac)
            return false;
    Facultad facultad(NomFac);
    Facultades.push_back(facultad);
    return true;
}

bool Universidad::EliminarFacultad(string NomFac)
{
    for(auto it = Facultades.begin(); it != Facultades.end(); it++)
        if(it->FObtenerNombre() == NomFac)
        {
            Facultades.erase(it);
            return true;
        }
    return false;
}

void Universidad::AgregarCarrera(string NomFac, string NomCarrera, unsigned int NumEst)
{
    bool encontrofac = false;
    auto it2 = Facultades.end();
    for(auto it = Facultades.begin(); it!= Facultades.end();it++)
        if(it->FObtenerNombre() == NomFac)
        {
            encontrofac = true;
            it2 = it;
        }
    
    if(encontrofac)
        it2->AgregarCarrera(NomCarrera, NumEst);
    else 
    {
        Facultad facultad(NomFac);
        facultad.AgregarCarrera(NomCarrera,NumEst);
        Facultades.push_back(facultad);
    }
}

bool Universidad::EliminarCarrera(string NomCarrera)
{
    for(auto it = Facultades.begin(); it!=Facultades.end(); it++)
        if(it->EliminarCarrera(NomCarrera))
            return true;
    return false;
}

void Universidad::ImprimirUniversidad()
{
    list<Facultad>::iterator it;
    for(it = Facultades.begin(); it!=Facultades.end(); it++)
    {
        it->ImprimirFacultad();
        cout<<endl;
    }
}
