/* Escribe un programa que solicite al usuario un número entero no negativo y
calcule su factorial. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, factorial=1;
    cout << "Digite un numero entero no negativo: ";
    cin >> num;
    while (num > 0) 
    {
        factorial *= num;
        num--;
    }
    cout << "El factorial del numero es " << factorial;
    return 0;
}