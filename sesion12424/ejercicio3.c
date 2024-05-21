/*Arreglo donde se almacenen las vocales*/
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char vocales[5];
    vocales[0]='a';
    vocales[1]='e';
    vocales[2]='i';
    vocales[3]='o';
    vocales[4]='u';
    printf("Las vocales son: \n");
    printf("%c\n", vocales[0]);
    printf("%c\n", vocales[1]);
    printf("%c\n", vocales[2]);
    printf("%c\n", vocales[3]);
    printf("%c\n", vocales[4]);
    return 0;
}