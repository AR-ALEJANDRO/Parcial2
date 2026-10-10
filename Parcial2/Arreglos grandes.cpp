#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    float ventas[100];
    float suma = 0;

    srand(time(0));

    cout << "Generando las ventas de los 100 clientes..." << endl;

    for (int i = 0; i < 100; i++)
    {
       bool repetido;
       int nuevaVenta;

       do  //Usado para repetir instrucciones si se cumple la condicion
       {
           repetido = false;  //Al comenzar cada intento, suponemos que la venta no esta repetida. Despues revisaremos si ya existe en el arreglo.

           nuevaVenta = 100 + rand() % 401; //Genera un numero entero entre 100 y 500 y lo guarda en una variable llamada nuevaVenta
           for (int j = 0; j < i; j++)
         {
            if (ventas[j] == nuevaVenta)  //Si la venta generada ya existe en el arreglo, se marca como repetida
            {
                repetido = true;
            }
         }
    
       } while (repetido);  //Mientras la variable repetido sea verdadera, se repetiran las instrucciones dentro del do 

         ventas[i] = nuevaVenta;  //Si la venta generada no esta repetida, se guarda en el arreglo ventas en la posicion i
         suma += ventas[i];  //Se suma la venta generada al total de ventas
             cout << "Cliente " << i + 1 << ": $" << ventas[i] << endl;

         }
    cout << "La suma total de las ventas es: " << suma << endl;

    return 0;
}