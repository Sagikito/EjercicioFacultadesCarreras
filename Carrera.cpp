#include "Carrera.h"

Carrera::Carrera(string x, unsigned int y)
{
    Nombre = x;
    CantEst = y;
}

string Carrera::ObtenerNombre()
{
    return Nombre;
}

unsigned int Carrera::ObtenerCantEst()
{
    return CantEst;
}

void Carrera::SumarEst(unsigned int n)
{
    CantEst += n;
}

void Carrera::RestarEst(unsigned int n)
{
    if( CantEst >= n)
        CantEst -= n;
}

void Carrera::CambiarNombre(string nNom)
{
    Nombre = nNom;
}