#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    /* Calcular el cubo de un número. */
    int num, cubo;
    printf("Dime un número: ");
    scanf("%i", &num);
    cubo = pow(num, 3);
    printf("El cubo de %i es %i\n", num, cubo);
    printf("Fin...");
    return 0;
}