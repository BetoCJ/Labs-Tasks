#include <stdio.h>

int main() {
    int N, i;
    
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &N);
    
    // Crear el vector
    int vector[N];
    
    // Ingresar los valores del vector
    printf("Ingrese los valores del vector:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &vector[i]);
    }
    
    // Mostrar el vector
    printf("\nEl vector ingresado es:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vector[i]);
    }
    
    // Encontrar el número mayor y menor del vector
    int numeroMayor = vector[0];
    int numeroMenor = vector[0];
    
    for (i = 1; i < N; i++) {
        if (vector[i] > numeroMayor) {
            numeroMayor = vector[i];
        }
        if (vector[i] < numeroMenor) {
            numeroMenor = vector[i];
        }
    }
    
    // Mostrar el número mayor y menor del vector
    printf("\n\nEl número mayor del vector es: %d\n", numeroMayor);
    printf("El número menor del vector es: %d\n", numeroMenor);
    
    return 0;
}
