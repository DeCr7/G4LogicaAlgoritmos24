/*Escribir un programa en que lea los tres lados de un triángulo. Determinar el tipo de triángulo:
equilátero, si tiene tres lados iguales;
o isósceles, si tiene dos lados iguales.
Dar énfasis al uso de la estructura de decisión doble (if-then-else)*/
#include <iostream>

using namespace std;

void tipoTriangulo (float lado1, float lado2, float lado3);

main()
{
    float lado1, lado2, lado3;
    cout << "Digite la longitud del primer lado: ";
    cin >> lado1;
    cout << "Digite la longitud del segundo lado: ";
    cin >> lado2;
    cout << "Digite la longitud del tercer lado: ";
    cin >> lado3;
    tipoTriangulo(lado1, lado2, lado3);
    return 0;
}

void tipoTriangulo (float lado1, float lado2, float lado3){
    if (lado1==lado2&&lado2==lado3)
    {
        cout << "El triangulo es equilatero";
    }
    else if (lado1==lado2||lado1==lado3||lado2==lado3)
    {
        cout << "El triangulo es isosceles";
    }
}