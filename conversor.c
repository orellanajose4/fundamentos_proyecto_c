#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;
    
    printf("Este es un conversor de Monedas\n");
    printf("1. Dólares a Quetzales\n");
    printf("2. Quetzales a Dólares\n");
    printf("3. Euros a Quetzales\n");
    printf("4. Quetzales a Euros\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    if((opcion > 4) || (opcion < 1)) {
        printf("error, opcion invalida");
        return 0;

    }
    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    if (opcion == 1) resultado = cantidad * 7.8;  // USD a GTQ
    else if (opcion == 2) resultado = cantidad / 7.8;  // GTQ a USD
    else if (opcion == 3) resultado = cantidad * 8.5;  // EUR a GTQ
    else if (opcion == 4) resultado = cantidad / 8.5;  // GTQ a EUR
    else {
        printf("Opción inválida\n");
        return 1;
    }

    printf("La cantidad convertida es: %.2f\n", resultado);
    return 0;
}
