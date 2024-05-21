/*Programa para calcular el área y el perímetro de un rectángulo dada la base y la altura.
Utilizar una función diferente por cada cálculo.
Area=b*a
Perimetro=(b*2)+(a*2)*/
#include <stdio.h>

float areaProceso(float b, float a);
float perimetroProceso(float b, float a);

int main(int argc, char const *argv[])
{
    int op;
    float a, b;
    float area, perimetro;
    printf("Bienvenido a la calculadora para rectangulos, aqui las opciones: \n");
    printf("Opcion 1: Calcular area\n");
    printf("Opcion 2: Calcular perimetro\n");
    printf("Opcion 3: Salir\n");
    printf("opcion: ");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        printf("Digite la base del rectangulo: ");
        scanf("%f", &b);
        printf("Digite la altura del rectangulo: ");
        scanf("%f", &a);
        area = areaProceso(b, a);
        printf("El area del rectangulo es de: %.2f\n", area);
        break;

    case 2:
        printf("Digite la base del rectangulo: ");
        scanf("%f", &b);
        printf("Digite la altura del rectangulo: ");
        scanf("%f", &a);
        perimetro = perimetroProceso(b, a);
        printf("El perimetro del rectangulo es de: %.2f\n", perimetro);
        break;

    case 3:
        printf("Adios");
        break;

    default:
        printf("Opcion no valida, vuelva a intentar\n");
        break;
    }

    if (op != 3)
    {
        main(0, 0);
    }
    return 0;
}

/*Funcion Area*/
float areaProceso(float b, float a)
{
    return b * a;
}

/*Funcion Perimetro*/
float perimetroProceso(float b, float a)
{
    return (b * 2) + (a * 2);
}