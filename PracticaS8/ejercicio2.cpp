/* Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int fir=100;
    while (fir>=1)
    {
        if (fir%2!=0)
        {
            cout << fir << endl;
        }
        fir--;
    }
    return 0;
}