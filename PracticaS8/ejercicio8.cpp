/* Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int vector1[5];
    int vector2[5];
    int vector3[5];
    int valor=1, total=0;

    cout << "Primer vector" << endl;
    while (valor<=5)
    {
        cout << "Digite el valor " << valor << ": ";
        cin >> vector1[valor];
        valor++;
    }

    valor=1;
    cout << "Segundo vector" << endl;
    while (valor<=5)
    {
        cout << "Digite el valor " << valor << ": ";
        cin >> vector2[valor];
        valor++;
    }

    valor=1;
    while (valor<=5)
    {
        vector3[valor]=vector1[valor]*vector2[valor];
        total += vector3[valor];
        valor++;
    }

    valor=1;
    cout << "El producto de ambos vectores es de:" << endl;
    while (valor<=5)
    {
        cout << vector3[valor] << " ";
        valor++;
    }
    cout << endl;
    cout << "El producto total es de" << total;

    return 0;
}