//Codigo Roto
#include <iostream>
using namespace std;

int main() {
   
    int numeros [5] = {10, 20, 30, 40, 50}; // Se declara un arreglo de enteros llamado numeros con 5 elementos

    cout << numeros[6] << endl; // Esto es un error, ya que el indice 5 esta fuera del rango del arreglo (0-4)  

    return 0;
}

//Codigo Arreglado

//#include <iostream>
//using namespace std;

//int main() {
   
    //int numeros [5] = {10, 20, 30, 40, 50}; // Se declara un arreglo de enteros llamado numeros con 5 elementos

    //cout << numeros[4] << endl; // Esto es correcto, ya que el indice 4 es el ultimo elemento del arreglo (0-4)

   // return 0;
//}