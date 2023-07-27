#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, i;

    printf("Ingrese el tamaño de los vectores: ");
    scanf("%d", &N);

    // Semilla para la generación de números aleatorios
    srand(time(NULL));

    // Crear los vectores
    int vector1[N], vector2[N], vector3[N];

    // Ingresar valores aleatorios al primer vector
    for (i = 0; i < N; i++) {
        vector1[i] = rand();
    }

    // Ingresar valores aleatorios mayores que 10 al segundo vector
    for (i = 0; i < N; i++) {
        vector2[i] = rand() % (RAND_MAX - 10) + 11;
    }

    // Ingresar valores aleatorios entre 20 y 50 al tercer vector
    for (i = 0; i < N; i++) {
        vector3[i] = rand() % 31 + 20;
    }

    // Mostrar los vectores por pantalla
    printf("\nPrimer vector:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vector1[i]);
    }

    printf("\n\nSegundo vector:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vector2[i]);
    }

    printf("\n\nTercer vector:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vector3[i]);
    }

    printf("\n");

    return 0;
}
