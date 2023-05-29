#include <stdio.h>
int main() {
    int inicio = 3;
    int fin = 100;
    int cantidadPrimos = 0;

    for (int num = inicio; num <= fin; num++) {
        int esPrimo = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo)
            cantidadPrimos++;
    }

    printf("La cantidad de números primos entre %d y %d es: %d\n", inicio, fin, cantidadPrimos);

    return 0;
}