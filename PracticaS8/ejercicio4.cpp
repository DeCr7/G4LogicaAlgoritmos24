/* Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos. */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int est=1;
    float total=0, nota, promedio;
    while (est<=10)
    {
        cout << "Digite la nota del estudiante: ";
        cin >> nota;
        total += nota;
        est++;
    }
    promedio=total/10;
    cout << "El promedio de las notas es de " << promedio;
    return 0;
}