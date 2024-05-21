/* Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, resultado, contador=1;
    cout << "Digite hasta cual numero sumar: ";
    cin >> num;
    while (contador<=num)
    {
        resultado += contador;
        contador++;
    }
    cout << "La suma de todos los numeros es " << resultado << endl;
    return 0;
}