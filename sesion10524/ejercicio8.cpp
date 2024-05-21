/* Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego cuente y muestre la cantidad de números pares
e impares. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arreglo[10];
    int valor=1;
    int par=0, impar=0;
    while (valor<=10)
    {
        cout << "Digite el valor " << valor << ": " ;
        cin >> arreglo[valor];
        if (arreglo[valor]%2==0)
        {
            par++;
        }
        else
        {
            impar++;
        }
        valor++;
    }
    cout << "Hay " << par << " numeros pares" << endl;
    cout << "Hay " << impar << " numeros impares" << endl;
    return 0;
}