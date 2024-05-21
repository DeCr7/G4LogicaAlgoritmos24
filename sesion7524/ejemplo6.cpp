#include <iostream>

using namespace std;

/* Leer un numero y dar la tabla de multiplicacion de ese numero */

int main(int argc, char const *argv[])
{
    int num, multiplicacion=1, resultado;
    cout << "Digite el numero: ";
    cin >> num;
    while (multiplicacion >= 12)
    {
        resultado=num*multiplicacion;
        cout << num << " x " << multiplicacion << " = " << resultado;
    }
    multiplicacion++;
    return 0;
}