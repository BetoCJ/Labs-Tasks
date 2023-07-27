
#include <stdio.h>

int main() {
    int N, i;
    float sueldo, sumaSueldos = 0;
    float sueldoMayor = 0, sueldoMenor = 0;
    int trabajadoresSueldoMenorPromedio = 0;

    printf("Ingrese la cantidad de trabajadores: ");
    scanf("%d", &N);

    // Ingresar los sueldos y realizar los cálculos
    for (i = 0; i < N; i++) {
        printf("Ingrese el sueldo del trabajador %d: ", i + 1);
        scanf("%f", &sueldo);

        // Validar que el sueldo esté dentro del rango permitido
        while (sueldo < 500000 || sueldo > 2500000) {
            printf("El sueldo ingresado no cumple con el rango permitido. Ingrese nuevamente: ");
            scanf("%f", &sueldo);
        }

        sumaSueldos += sueldo;

        if (i == 0) {
            sueldoMayor = sueldo;
            sueldoMenor = sueldo;
        } else {
            if (sueldo > sueldoMayor) {
                sueldoMayor = sueldo;
            }
            if (sueldo < sueldoMenor) {
                sueldoMenor = sueldo;
            }
        }

        if (sueldo < (sumaSueldos / N)) {
            trabajadoresSueldoMenorPromedio++;
        }
    }

    // Calcular el promedio de sueldos
    float promedioSueldos = sumaSueldos / N;

    // Mostrar los resultados
    printf("\nPromedio de sueldos: %.2f\n", promedioSueldos);
    printf("Sueldo mayor: %.2f\n", sueldoMayor);
    printf("Sueldo menor: %.2f\n", sueldoMenor);
    printf("Cantidad de trabajadores con sueldo menor que el promedio: %d\n", trabajadoresSueldoMenorPromedio);

    return 0;
}
