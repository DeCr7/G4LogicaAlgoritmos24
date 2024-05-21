/*Funciones*/
#include <stdio.h>
#include <stdlib.h>

/*Saludar*/
void showMessage();
void suma();

void showMessage(){
    printf("Universidad Americana \n");
    printf("UAM \n");   
}

void suma(){
    int num1, num2, resultado;
    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);
    resultado=num1+num2;
    printf("El resultado de la suma es %i", resultado);
}