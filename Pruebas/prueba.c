#include <stdio.h>

int main() {
    char producto[100];
    float precioCompra, precioVenta;
    int existencia;

    printf("Ingrese el nombre del producto: ");
    scanf("%s", producto);

    printf("Ingrese el precio de compra: ");
    scanf("%f", &precioCompra);

    printf("Ingrese el precio de venta: ");
    scanf("%f", &precioVenta);

    printf("Ingrese la existencia: ");
    scanf("%d", &existencia);

    float ganancia = (precioVenta - precioCompra) * existencia;
    printf("\nProducto: %s\n", producto);
    printf("Ganancia por unidad: %.2f\n", precioVenta - precioCompra);
    printf("Ganancia total: %.2f\n", ganancia);

    return 0;
}