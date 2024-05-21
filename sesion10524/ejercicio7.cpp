/* Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego los ordene en forma ascendente utilizando el
algoritmo de ordenamiento de burbuja. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arreglo[5];
    int valor=0, aux;

    while (valor < 5)
    {
        cout << "Digite el valor " << valor+1 << ": ";
        cin >> arreglo[valor];
        valor++;
    }

    int i=0;
    while (i<4)
    {
        int j=0;
        while (j<4)
        {
            if (arreglo[j] > arreglo[j+1])
            {
                aux=arreglo[j+1];
                arreglo[j+1]=arreglo[j];
                arreglo[j]=aux;
            }
            j++;
        }
        i++;
    }

    int k=0;
    while (k<5)
    {
        cout << arreglo[k] << " ";
        k++;
    }
    return 0;
}