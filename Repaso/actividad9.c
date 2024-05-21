/*Programa que permita leer el valor correspondiente a una distancia en kilómetros y las visualice expresadas en metros.
Utiliza una función*/
#include <stdio.h>

float kilosConverMetros(float kilos);

int main(int argc, char const *argv[])
{
    float kilos, metros;
    printf("Digite la distancia en kilometros para convertirlos a metros: ");
    scanf("%f", &kilos);

    metros=kilosConverMetros(kilos);

    printf("La distancia de kilometros en metros es %.2f", metros);
    return 0;
}

float kilosConverMetros(float kilos){
    return kilos*1000;
    }