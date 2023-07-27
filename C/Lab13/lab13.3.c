#include <stdio.h>

int main() {
    int n, i;

    printf("Ingrese la cantidad de numeros (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("La cantidad de numeros debe ser mayor a 0.\n");
        return main();
    }

    // Limitamos el tamaño del vector a un valor razonable (1000)
    if (n > 1000) {
        printf("La cantidad de numeros no debe exceder 1000.\n");
        return main();
    }

    int vector[n];
    int menor, mayor;

    // Lectura de los numeros y validacion del rango (10 a 30)
    printf("Ingrese %d numeros enteros entre 10 y 30:\n", n);
    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vector[i]);
        if (vector[i] < 10 || vector[i] > 30) {
            printf("El numero debe estar entre 10 y 30.\n");
            return main();
        }
    }

    // Inicializacion de menor y mayor con el primer elemento del vector
    menor = mayor = vector[0];

    // Busqueda del menor y mayor valor en el vector
    for (i = 1; i < n; i++) {
        if (vector[i] < menor) {
            menor = vector[i];
        }
        if (vector[i] > mayor) {
            mayor = vector[i];
        }
    }

    printf("El menor valor es: %d\n", menor);
    printf("El mayor valor es: %d\n", mayor);

    return 0;
}
