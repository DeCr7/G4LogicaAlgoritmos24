/* Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo 

Nota mínima para aprobar: 70 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int alumno=1, aprobado=0, reprobado=0;
    float nota, total=0, promedio;
    while (alumno<=8)
    {
        cout << "Digite la nota del estudiante: ";
        cin >> nota;
        total += nota;
        alumno++;
        if (nota>=70)
        {
            aprobado++;
        }
        else
        {
            reprobado++;
        }
    }
    promedio=total/8;
    cout << "Hubieron " << aprobado << " alumnos aprobados" << endl;
    cout << "Hubieron " << reprobado << " alumnos reprobados" << endl;
    cout << "El promedio de la clase es de " << promedio;
    return 0;
}