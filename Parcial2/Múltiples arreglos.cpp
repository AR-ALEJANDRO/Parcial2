#include <iostream>
using namespace std; 

int main ()
{
    float grupoA [5]; // El float indica que el arreglo es de tipo decimal, y el 5 indica que tiene 5 posiciones
    float grupoB [5];
    float mayor [5]; // Cada arreglo guarda un conjunto diferente de datos, aunque las posiciones estan relacionadas

	for (int i = 0; i < 5; i++)
{
    cout << "ingrese el promedio del estudiante " << i + 1 << " del grupo A: "; 
    cin >> grupoA[i]; // Indica que se va a guardar el valor ingresado por el usuario en la posicion i del arreglo grupoA
}
 
    for (int i = 0; i < 5; i++)
{
    cout << "ingrese el promedio del estudiante " << i + 1 << " del grupo B: "; 
    cin >> grupoB[i]; // Indica que se va a guardar el valor ingresado por el usuario en la posicion i del arreglo grupoB
}

    for (int i = 0; i < 5; i++)
{
    if (grupoA[i] > grupoB[i]) // Si el promedio del estudiante del grupo A es mayor que el del grupo B, se guarda en el arreglo mayor
    {
        mayor[i] = grupoA[i]; 
    }
    else // Si el promedio del estudiante del grupo B es mayor que el del grupo A, se guarda en el arreglo mayor
    {
        mayor[i] = grupoB[i]; 
    }
}

    cout << endl << "Los promedios mayores de cada posicion son: " << endl;
    for (int i = 0; i < 5; i++) // Se hace un bucle para mostrar los promedios mayores de cada posicion
{
    cout << "estudiante " << i + 1 << ": "; 
    cout << "Grupo A: " << grupoA[i] << " Grupo B: " << grupoB[i] << " Mayor: " << mayor[i] << endl; 
}

    return 0;
}