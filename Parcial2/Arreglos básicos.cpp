#include <iostream>
using namespace std; 

int main()
{
	float calificacion[6]{}; //Utilizado para almacemar 5 calificaciones y un promedio sin tener que repetir 6 variables diferentes
	float suma = 0; //Variable para almacenar la suma de las calificaciones

	for (int i = 0; i < 5; i++) //Se hace el primer bucle para ingresar y sumar las calificaciones de los 5 estudiantes
	{
		cout << "Ingrese la calificacion del estudiante " << i + 1 << ": "; 
		cin >> calificacion[i];   //guarda la calificacion que introduce el usuario
		suma += calificacion[i];      // agrega esa calificacion a la suma acumulada
		//Un acumulador es una variable que va reuniendo resultados, en este caso, sumando las calificaciones
	}

	calificacion [5] = suma / 5; //Se calcula el promedio y se almacena en la última posición del arreglo

	cout << endl << "Calificaciones:" << endl; //se imprime un salto de linea y un mensaje indicando que se van a mostrar las calificaciones

	for (int i = 0; i < 5; i++) //Se hace un segundo bucle para mostrar las calificaciones de los 5 estudiantes
	{
		cout << "Calificacion" << i + 1 << ": " << calificacion[i] << endl; //Se imprime la calificacion del estudiante correspondiente
	}
	cout << "Promedio: " << calificacion[5] << endl; //Se imprime el promedio que se encuentra en la última posición del arreglo

	return 0;
}
 