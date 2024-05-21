/*Programa para crear un procedimiento que reciba dos variables reales como argumentos e intercambiar sus valores*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*Llamada a la funcion*/
    intercambio();
    return 0;
}

void intercambio(){
    int num1, num2;
    printf("Digite el primer valor: ");
    scanf("%d", &num1);
    printf("Digite el segundo valor: ");
    scanf("%d", &num2);
    printf("El primer valor es %d y el segundo valor es %d", num2, num1);
}