/*Una compañía dedicada al alquiler de automóviles:

cobra $30 hasta un máximo de 500 KM de distancia recorrida.
Para más de 500 KM y hasta 1,000 KM, cobra $30 más un monto adicional del 5% por cada kilómetro en exceso sobre 500.
Para más de 1,000 KM, cobra $30 más un monto adicional del 8% por cada kilómetro en exceso sobre 1,000.

Los precios ya incluyen el 15% del impuesto (IVA).

Escriba un programa, que determine:
el monto a pagar por el alquiler de un vehículo sin impuesto,
y el monto a pagar con el impuesto incluido.

Dar énfasis al uso de la estructura de decisión anidada (if-then-else, if-then-else, if…).*/

#include <iostream>

using namespace std;

void calcularMonto(float distancia);

main()
{
    float distancia;
    cout << "Ingrese la distancia recorrida en kilometros: ";
    cin >> distancia;
    calcularMonto(distancia);
    return 0;
}

void calcularMonto(float distancia){
    float monto;
        if (distancia <= 500)
    {
        printf("El monto con IVA es de $30\n");
        printf("El monto con IVA es de $25.5\n");
    }
    else if (distancia <= 1000)
    {
        monto = 30 + ((distancia - 500) * 0.05);
        printf("El monto con IVA es de %.2f\n", monto);
        printf("El monto sin IVA es de %.2f\n", monto - (monto * 0.15));
    }
    else if (1000 < distancia)
    {
        monto = 55 + ((distancia - 1000) * 0.08);
        printf("El monto con IVA es de %.2f\n", monto);
        printf("El monto sin IVA es de %.2f\n", monto - (monto * 0.15));
    }
}