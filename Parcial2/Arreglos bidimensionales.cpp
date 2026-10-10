#include <iostream>
using namespace std; 

int main()
{
    float matriz[10][3]; // Se declara una matriz de 10 filas y 3 columnas para almacenar los promedios de los estudiantes de dos grupos y el promedio mas alto

    for (int i = 0; i < 10; i++) // Se hace un bucle para INGRESAR los promedios de los estudiantes de ambos grupos
    {
        cout << "Ingrese el promedio del estudiante " << i + 1 << " del grupo A: ";
        cin >> matriz[i][0]; // Se almacena el promedio del estudiante del grupo A en la primera columna de la matriz

        cout << "Ingrese el promedio del estudiante " << i + 1 << " del grupo B: ";
        cin >> matriz[i][1]; // Se almacena el promedio del estudiante del grupo B en la segunda columna de la matriz

        if (matriz[i][0] > matriz[i][1]) // Se compara el promedio del estudiante del grupo A con el del grupo B
        {
            matriz[i][2] = matriz[i][0]; // Se almacena el promedio mas alto en la tercera columna de la matriz
        }
        else
        {
            matriz[i][2] = matriz[i][1];  
        }
    }

    cout << endl << "Promedios mas altos" << endl; 

    for (int i = 0; i < 10; i++) // Se hace un bucle para MOSTRAR los promedios mas altos de cada estudiante
    {
        cout << "Estudiante " << i + 1 << ": "; // Se muestra el numero del estudiante (i + 1) en lugar de la posicion del arreglo (i)
        cout << "Grupo A: " << matriz[i][0] // Se muestra el promedio del estudiante del grupo A
             << ", Grupo B: " << matriz[i][1] // Se muestra el promedio del estudiante del grupo B
             << ", Promedio mas alto: " << matriz[i][2] << endl; // Se muestra el promedio mas alto del estudiante
    }

    return 0;
}
