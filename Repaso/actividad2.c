/*Programa que realice las operaciones básicas*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opcion;
    printf("Bienvenido a la calculadora, tienes las siguientes opciones: \n");
    printf("Opcion 1: Suma\n");
    printf("Opcion 2: Resta\n");
    printf("Opcion 3: Multiplicacion\n");
    printf("Opcion 4: Division\n");
    printf("Opcion 5: Salir\n");
    printf("Seleccione la opcion: ");
    scanf("%i", &opcion);

    if (opcion == 1)
    {
        printf("La suma de ambos numeros es: %i\n", sumar());
    }
    else if (opcion == 2)
    {
        printf("La resta de ambos numeros es: %i\n", resta());
    }
    else if (opcion == 3)
    {
        printf("La multiplicacion de ambos numeros es: %i\n", multiplicacion());
    }
    else if (opcion == 4)
    {
        printf("La division de ambos numeros es: %i\n", division());
    }
    else if (opcion == 5)
    {
        printf("Adios");
    }
    else
    {
        printf("Opcion no valida, vuelva a intentar\n");
    }
    if (opcion != 5)
    {
        main(0, 0);
    }
    return 0;
}

int sumar()
{
    int num1, num2;
    printf("Digite dos numeros\n");
    printf("Primer numero: ");
    scanf("%i", &num1);
    printf("Segundo numero: ");
    scanf("%i", &num2);
    return num1 + num2;
}

int resta()
{
    int num1, num2;
    printf("Digite dos numeros\n");
    printf("Primer numero: ");
    scanf("%i", &num1);
    printf("Segundo numero: ");
    scanf("%i", &num2);
    return num1 - num2;
}

int multiplicacion()
{
    int num1, num2;
    printf("Digite dos numeros\n");
    printf("Primer numero: ");
    scanf("%i", &num1);
    printf("Segundo numero: ");
    scanf("%i", &num2);
    return num1 * num2;
}

int division()
{
    int num1, num2;
    printf("Digite dos numeros\n");
    printf("Primer numero: ");
    scanf("%i", &num1);
    printf("Segundo numero: ");
    scanf("%i", &num2);
    if (num2 > 0)
        return num1 / num2;
    return 0;
}