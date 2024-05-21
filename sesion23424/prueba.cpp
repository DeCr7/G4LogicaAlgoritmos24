#include <iostream>

using namespace std;

void calcularCosto(int op);

main()
{
    int op;
    cout << "Costos por Servicio\n";
    cout << "Menu de Opciones\n";
    cout << "1. 100 o mas alumnos\n";
    cout << "2. De 50 a 99 alumnos\n";
    cout << "3. De 30 a 49 alumnos\n";
    cout << "4. Menos de 30 alumnos\n";
    cout << "5. Salir\n";
    cout << "opcion: ";
    cin >> op;

    switch (op)
    {
    case 1:
        calcularCosto(op);
        break;

    case 2:
        calcularCosto(op);
        break;

    case 3:
        calcularCosto(op);
        break;

    case 4:
        calcularCosto(op);
        break;

    default:
        cout << "Opcion no valida\n";
        break;

    case 5:
        cout << "Adios";
        break;
    }
    if (op != 5)
    {
        main();
    }
    return 0;
}

void calcularCosto(int op)
{
    int alumnos, monto;
    switch (op)
    {
    case 1:
        cout << "Digite la cantidad de alumnos: ";
        cin >> alumnos;
        if (100 <= alumnos)
        {
            monto = alumnos * 60;
            cout << "Cada alumno debera pagar $60\n";
            printf("El pago a la compañia de viajes es de $%d\n", monto);
        }
        else
        {
            cout << "Opcion no valida\n";
        }
        break;

    case 2:
        cout << "Digite la cantidad de alumnos: ";
        cin >> alumnos;
        if (alumnos <= 99 && alumnos >= 50)
        {
            monto = alumnos * 70;
            cout << "Cada alumno debera pagar $70\n";
            printf("El pago a la compañia de viajes es de $%d\n", monto);
        }
        else
        {
            cout << "Opcion no valida\n";
        }
        break;

    case 3:
        cout << "Digite la cantidad de alumnos: ";
        cin >> alumnos;
        if (alumnos <= 49 && alumnos >= 30)
        {
            monto = alumnos * 100;
            cout << "Cada alumno debera pagar $100\n";
            printf("El pago a la compañia de viajes es de $%d\n", monto);
        }
        else
        {
            cout << "Opcion no valida\n";
        }
        break;

    case 4:
        cout << "Digite la cantidad de alumnos: ";
        cin >> alumnos;
        if (alumnos < 30 && alumnos >= 1)
        {
            monto = 4500/alumnos;
            printf("Cada alumno debera pagar $%d\n", monto);
            cout << "El pago a la compañia de viajes es de $4,500\n";
        }
        else
        {
            cout << "Opcion no valida\n";
        }
        break;
    default:
        break;
    }
}