/*Obtener el producto de dos numeros*/
#include <stdio.h>

/*Prototipo de funcion*/
int producto(int num1, int num2);

int main(int argc, char const *argv[])
{
    /*Llamada a la función*/
    int x = producto(2, 6);
    printf("%d\n", x);
    return 0;
}

/*Funcion*/
int producto(int num1, int num2){
    return num1 * num2;
}