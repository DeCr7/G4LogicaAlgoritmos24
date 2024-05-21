#include <stdio.h>

int main() {
    char producto[100];
    float precioC, precioV;
    int existencia;

    printf("Ingrese el nombre del producto: ");
    scanf("%s", producto);

    printf("Ingrese el precio de compra: ");
    scanf("%f", &precioC);

    printf("Ingrese el precio de venta: ");
    scanf("%f", &precioV);

    printf("Ingrese la existencia: ");
    scanf("%d", &existencia);

    float ganancia = (precioV - precioC) * existencia;
    float gananciaI = precioV - precioC;
    printf("\nProducto: %s\n", producto);
    printf("Ganancia por unidad: %.2f\n", precioV - precioC);
    printf("Ganancia total: %.2f\n", ganancia);

    return 0;
}