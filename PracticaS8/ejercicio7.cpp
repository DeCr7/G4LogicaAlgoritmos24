/* . Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int vector1[5];
    int vector2[5];
    int vector3[5];
    int valor=1;

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
        vector3[valor]=vector1[valor]+vector2[valor];
        valor++;
    }

    valor=1;
    cout << "La suma de ambos vectores es de:" << endl;
    while (valor<=5)
    {
        cout << vector3[valor] << " ";
        valor++;
    }
 
    return 0;
}