/*Leer el nombre de un producto, precio compra, precio venta y la existencia, imprimir la ganancia
de dicho producto y la ganancia total*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char producto[40];
    float precioCompra, precioVenta, ganancia, gananciaTotal;
    int existencia;

    printf("Introduzca el nombre del producto: ");
    scanf("%[^\n]", producto);
    printf("Introduzca el precio inicial al que compro cada producto: ");
    scanf("%f", &precioCompra);
    printf("Introduzca el precio al que vendera cada unidad: ");
    scanf("%f", &precioVenta);
    printf("Introduzca la cantidad de unidades del producto: ");
    scanf("%d", &existencia);
    ganancia=precioVenta-precioCompra;
    gananciaTotal=ganancia*existencia;
    printf("Nombre del producto: %s\n", producto);
    printf("Ganancia por cada unidad: %.2f\n", ganancia);
    printf("Ganancia por todas las unidades: %.2f\n", gananciaTotal);
    return 0;
}