#pragma once 
#include<string>
#include<iostream>
using namespace std;

struct Carrera
{
	//datos
	string Nombre;
	unsigned int CantEst;
	//Constructor
	Carrera(string x, unsigned int y);
    //operaciones
    string ObtenerNombre();
    unsigned int ObtenerCantEst();
    void SumarEst(unsigned int n);
    void RestarEst(unsigned int n);
    void CambiarNombre(string nNom);
};
