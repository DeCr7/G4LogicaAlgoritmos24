/*Almacenar 6 elementos flotantes*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float arreglo [6];
    arreglo[0]=7.1;
    arreglo[1]=7.2;
    arreglo[2]=7.3;
    arreglo[3]=7.4;
    arreglo[4]=7.5;
    arreglo[5]=7.6;

    printf("El valor de los arreglos son: \n");
    printf("El primero: %.2f\n", arreglo[0]);
    printf("El segundo: %.2f\n", arreglo[1]);
    printf("El tercero: %.2f\n", arreglo[2]);
    printf("El cuarto: %.2f\n", arreglo[3]);
    printf("El quinto: %.2f\n", arreglo[4]);
    printf("El sexto: %.2f\n", arreglo[5]);
    return 0;
}
