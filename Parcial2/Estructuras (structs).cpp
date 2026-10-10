#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    string matricula;
    float calif[3];
};
 
int main() {

    Alumno alumnos[5];

for (int i = 0; i < 5; i++)
{
cout << "Ingrese el nombre completo del alumno " << i + 1 << ": ";
getline(cin, alumnos[i].nombre);

cout << "Ingrese la matricula del alumno " << i + 1 << ": ";
getline(cin, alumnos[i].matricula);

for (int j = 0; j < 3; j++)
{
    cout << "Ingrese la calificacion " << j + 1
         << " del alumno " << i + 1 << ": ";

    cin >> alumnos[i].calif[j];
}
    cin.ignore();
}
for (int i = 0; i < 5; i++)
{ 
    float suma = 0;
    for (int j = 0; j < 3; j++)
    {
        suma += alumnos[i].calif[j];
    }
    float promedio = suma / 3;
    cout << "nombre: " << alumnos[i].nombre << endl;
    cout << "matricula: " << alumnos[i].matricula << endl;
    cout << "promedio: " << promedio << endl;
    cout << "-------------------------" << endl;
}
return 0;
 }