#include <iostream>
using namespace std;

void intercambiar(int &a, int &b) // La función intercambiar toma dos referencias a enteros como parámetros
{
    int temp = a; // Se guarda el valor de a en una variable temporal
    a = b;  // Se asigna el valor de b a a
    b = temp; // Se asigna el valor de la variable temporal a b

}

int main() 
{
    int x = 20, y = 40; 
    cout << "Antes del intercambio: x = " << x << ", y = " << y << endl;
    intercambiar(x, y);
    cout << "Despues del intercambio: x = " << x << ", y = " << y << endl;

    return 0;
}