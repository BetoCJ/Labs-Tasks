#include <stdio.h>

int main() {
    int cantidadEstudiantes, i;
    float promedio, sumaPromedios = 0;
    int estudiantesAprobados = 0, estudiantesReprobados = 0;

    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &cantidadEstudiantes);

    // Ingresar los promedios y realizar los cálculos
    for (i = 0; i < cantidadEstudiantes; i++) {
        printf("Ingrese el promedio del estudiante %d: ", i + 1);
        scanf("%f", &promedio);

        sumaPromedios += promedio;

        if (promedio >= 4) {
            estudiantesAprobados++;
        } else {
            estudiantesReprobados++;
        }
    }

    // Calcular el promedio general
    float promedioGeneral = sumaPromedios / cantidadEstudiantes;

    // Mostrar los resultados
    printf("\nPromedio general del curso: %.2f\n", promedioGeneral);
    printf("Cantidad de estudiantes aprobados: %d\n", estudiantesAprobados);
    printf("Cantidad de estudiantes reprobados: %d\n", estudiantesReprobados);

    return 0;
}
