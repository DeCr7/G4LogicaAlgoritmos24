/*Obtener el producto de dos numeros*/
#include <stdio.h>

/*Prototipo de funcion*/
int producto(int num1);

int main(int argc, char const *argv[])
{
    /*Llamada a la función*/
    pantalla();
    return 0;
}

/*Funcion*/
int producto(int num1){
    return -(num1);
}

void pantalla(){
    int priNum, segNum;
    printf("Digita su numero para cambiar el signo: ");
    scanf("%d", &priNum);
    segNum = producto(priNum);
    printf("Su numero con el signo cambiado es: %d", segNum);
}