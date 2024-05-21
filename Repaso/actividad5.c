/*Dadas las horas trabajadas de una persona y el valor por hora. Calcular su salario y visualizarlo.
Utilizar una función para el cálculo del salario, la cual recibe los datos leídos desde el programa principal*/
#include <stdio.h>

float convertirSalario(float horas, float valorHora);

int main(int argc, char const *argv[])
{
    float horas, valorHora, salario;
    printf("Digita las horas trabajadas: ");
    scanf("%f", &horas);
    printf("Digita el valor por hora: ");
    scanf("%f", &valorHora);

    salario=convertirSalario(horas, valorHora);

    printf("Su salario es de: %.1f", salario);
    return 0;
}

float convertirSalario(float horas, float valorHora){
    return horas*valorHora;
    }