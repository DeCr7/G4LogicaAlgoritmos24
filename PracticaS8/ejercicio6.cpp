/* Hacer un programa que sume los números pares comprendidos entre
100 y 200. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num=100, total=0;
    while (num<=200)
    {
        if (num%2==0)
        {
            total+=num;
        }
        num++;
    }
    cout << "La suma de los numeros pares entre 100 y 200 es " << total;
    return 0;
}