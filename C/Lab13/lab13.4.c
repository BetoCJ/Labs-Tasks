#include <stdio.h>
#include <stdlib.h>
int main(){

    int n, i;

    printf("Ingrese la cantidad de notas (N):");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("La cantidad de notas debe ser mayor a 0 y menor a 100.\n");
        system("pause");
        system("cls");
        return main();
    }

    int vector[n];
    for (i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%d", &vector[i]);
        if (vector[i] < 1 || vector[i] > 7) {
            printf("La nota debe estar entre 1 y 7.\n");
            system("pause");
            system("cls");       
            return main();
        }
    }

    for (i = 0; i < n; i++) {
        printf("\nNota %d: %d\n", i + 1, vector[i]);
    }

    for (i = 0; i < n; i++) {
        if (vector[i] < 4) {
        printf("\nLas notas reprobadas son, Nota %d: %d\n", i + 1, vector[i]);
        }
    }

    return 0;
}