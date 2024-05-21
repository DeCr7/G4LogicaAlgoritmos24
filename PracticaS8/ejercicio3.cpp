/* Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int fir=1, resultado=0;
    while (fir<=100)
    {
        resultado += fir*fir;
        fir++;
    }
    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es de " << resultado;
    return 0;
}