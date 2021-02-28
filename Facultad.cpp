#include "Facultad.h"

//constructor
Facultad::Facultad(string x){
    Nombre = x;
}

string Facultad::FObtenerNombre()
{
    return Nombre;
}

//Retorna el total de estudiantes de una facultad
unsigned int Facultad::FTotalEst()
{
    unsigned int total = 0;
    for(int i = 0; i < Carreras.size(); i++)
        total += Carreras[i].ObtenerCantEst();
    return total;
}

//Cambia el nombre de una facultad
void Facultad::CambiarNombre(string Nnom){
    Nombre = Nnom;
}

//Agregar carrera: si ya estaba retorna falso, si no, la agrega al final del vector
bool Facultad::AgregarCarrera(string NomCarrera, unsigned int NumEst)
{
    for(int i = 0; i<Carreras.size(); i++)
        if(Carreras[i].ObtenerNombre() == NomCarrera)
            return false;
    Carrera carrera(NomCarrera, NumEst);
    Carreras.push_back(carrera);
    return true;
}

//Eliminar carrera: si esta la elimina y retorna verdadero, sino simplemente retorna falso
bool Facultad::EliminarCarrera(string NomCarrera)
{
    int posicion = -1;
    for(int i = 0; i<Carreras.size(); i++)
        if(Carreras[i].ObtenerNombre() == NomCarrera)
            posicion = i;
    
    if(posicion != -1)
    {
        Carreras.erase(Carreras.begin() + posicion);
        return true;
    }
    else 
        return false;
}

void Facultad::ImprimirFacultad()
{
    //sera que esto si sirve??
    cout<<FObtenerNombre();
    for(int i = 0; i<Carreras.size(); i++)
    {
        cout<<endl;
        cout<<Carreras[i].ObtenerNombre()<<endl;
        cout<<"NumEstudiantes: "<<Carreras[i].CantEst<<endl;
    }
}