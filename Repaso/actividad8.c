/*Programa que permita leer el valor correspondiente a una distancia en millas y la visualice expresada en metros.
Sabiendo que 1 milla marina equivale a 1852 metros. Utiliza una función sin parámetros.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    conversion();
    return 0;
}

void conversion(){
    float millaMarina, metros;
    printf("Digite la distancia en millas marinas que desea en metros: ");
    scanf("%f", &millaMarina);
    metros=millaMarina*1852;
    printf("La distancia en millas marinas equivale a %.2f metros", metros);
}