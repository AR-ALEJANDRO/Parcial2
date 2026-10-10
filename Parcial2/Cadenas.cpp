#include <iostream>
#include <string>
using namespace std;

int main()
{
    string NombreCompleto;
    string Nombre;
    string Apellido;

    cout << "Ingrese su nombre completo: ";
    getline(cin, NombreCompleto);

   size_t espacio = NombreCompleto.find(' ');
   if (espacio == string::npos)
{
    cout << "Error: Debe ingresar nombre y apellido separados por un espacio." << endl;
    return 0;
}
   Nombre = NombreCompleto.substr(0, espacio);
   Apellido = NombreCompleto.substr(espacio + 1);

   bool NombreTieneNumero = Nombre.find_first_of("0123456789") != string::npos;
   bool ApellidoTieneNumero = Apellido.find_first_of("0123456789") != string::npos;

   if (NombreTieneNumero || ApellidoTieneNumero)
{
   cout << "Error: El nombre o apellido contiene numeros." << endl;
}
   else
{
    cout << "Nombre: " << Nombre << endl;
    cout << "Apellido: " << Apellido << endl;
    cout << "Los datos son validos." << endl;
}
    return 0;
}