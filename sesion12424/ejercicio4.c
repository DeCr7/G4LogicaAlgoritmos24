//Almacenar 10 elementos y sumarlos

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int elementos [10];
    int suma;

    elementos[0]=3;    
    elementos[1]=2;    
    elementos[2]=5;    
    elementos[3]=6;    
    elementos[4]=8;    
    elementos[5]=4;    
    elementos[6]=3;    
    elementos[7]=2;    
    elementos[8]=1;    
    elementos[9]=9;    
    suma=elementos[0]+elementos[1]+elementos[2]+elementos[3]+elementos[4]+elementos[5]+elementos[6]+elementos[7]+elementos[8]+elementos[9];
    printf("La suma de todos los elementos es: %i", suma);
    return 0;
}