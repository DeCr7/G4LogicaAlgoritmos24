/*Temperaturas Fahrenheit a grados Celsius*/
#include <stdio.h>

/*Prototipo de función*/
float convertirCelsius(int gradosf);

int main(int argc, char const *argv[])
{
    int temperaturaF;
    float celsius;
    printf("Digite la temperatura Fahrenheit que desea en grados Celsius: ");
    scanf("%d", &temperaturaF);
    
    /*Llamada a la función*/
    celsius=convertirCelsius(temperaturaF);

    printf("Temperatura en grados Celsius: %.2f", celsius);
    return 0;
}

/*Función*/
float convertirCelsius(int gradosf){
    return (gradosf-32)/1.8;
}