#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* Leer un numero y decir si es primo o no */
    /* Un numero es primo solo si divide entre si mismo y 1 */
    int num, cont = 0;
    int i = 1;
    cout << "Dime un numero: " << endl;
    cin >> num;
    while (i <= num)
    {
        if (num % i == 0)
        {
            cont++;
        }
        i++;
    }
    if (cont == 2)
    {
        cout << "El numero es primo" << endl;
    }
    else
    {
        cout << "El numero no es primo" << endl;
    }
    return 0;
}