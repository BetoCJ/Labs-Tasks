#include <stdio.h>

// Función para verificar si un número es primo
int esPrimo(int num) {
    if (num < 2) {
        return 0;  // No se consideran números primos menores que 2
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;  // No es primo
        }
    }

    return 1;  // Es primo
}

int main() {
    int inicio = 100;
    int fin = 200;
    int suma = 0;

    printf("Numeros primos entre %d y %d:\n", inicio, fin);

    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            printf("%d ", i);
            suma += i;
        }
    }

    printf("\nLa suma de los numeros primos es: %d\n", suma);

    return 0;
}
