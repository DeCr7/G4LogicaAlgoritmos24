/*Escribe un programa que permita introducir una medida expresada en centímetros y la convierta en pulgadas.
(1 pulgada=2.54 centímetros).*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    conversion();
    return 0;
}

void conversion(){
    float centi, pulg;
    printf("Digite los centimetros que desea en pulgadas: ");
    scanf("%f", &centi);
    if (centi >= 0){
        pulg=centi/2.54;
        printf("Los centimetros en pulgadas son: %f", pulg);
    }
    else{
        printf("Opcion no valida");
    }
}