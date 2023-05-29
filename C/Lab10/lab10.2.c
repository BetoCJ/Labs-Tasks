#include <stdio.h>
int main() {
    int numeros[5];

    printf("Ingrese 5 numeros mayores a 100:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        while (numeros[i] <= 100) {
            printf("El numero ingresado debe ser mayor a 100. Ingrese nuevamente: ");
            scanf("%d", &numeros[i]);
        }
    }

    printf("Los numeros ingresados son:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
