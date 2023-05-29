#include <stdio.h>
int main() {
    int N;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &N);

    int numeros[N];

    printf("Ingrese los numeros:\n");
    for (int i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Arreglo completo:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Numeros impares:\n");
    for (int i = 0; i < N; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");

    return 0;
}
