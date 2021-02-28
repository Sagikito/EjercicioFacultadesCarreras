#include "Universidad.h"

//primer comentario a ver como funciona vs + github
//a ver segundo comentario...

int main()
{
    Universidad Javeriana;
    string nomfac, nomcarrera;
    char op;
    unsigned int numEst;

    do{
    cout << "Ingrese nombre facultad: ";
    cin >> nomfac;
    cout << "Ingrese carrera: ";
    cin >> nomcarrera;
    cout << "Ingrese numero de estudiantes: ";
    cin >> numEst;
    Javeriana.AgregarCarrera(nomfac, nomcarrera, numEst);
    cout << "Desea ingresar otra carrera? (s/n): ";
    cin >> op;
    }while(op == 's' || op == 'S');

    cout<<endl;
    Javeriana.ImprimirUniversidad();
    cout<<endl;
    cout<<"Cantidad de Estudiantes en la universidad: "<<Javeriana.UTotalEst()<<endl;    
}