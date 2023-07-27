#include <stdio.h>

int main() {
    int N, i;
    float sueldo, sumaSueldos = 0;
    float sueldoMayor = 0, sueldoMenor = 0;
    int personasMayorA = 0;
    float monto;
    int posicion;

    printf("Ingrese la cantidad de trabajadores: ");
    scanf("%d", &N);

    // Crear el vector de sueldos
    float sueldos[N];

    // Ingresar los sueldos y realizar los cálculos
    printf("\nIngrese los sueldos de los trabajadores:\n");
    for (i = 0; i < N; i++) {
        printf("Sueldo del trabajador %d: ", i + 1);
        scanf("%f", &sueldo);

        // Validar que el sueldo esté dentro del rango permitido
        while (sueldo < 500000 || sueldo > 2500000) {
            printf("El sueldo ingresado no cumple con el rango permitido. Ingrese nuevamente: ");
            scanf("%f", &sueldo);
        }

        sueldos[i] = sueldo;

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
    }

    // Calcular el promedio de sueldos
    float promedioSueldos = sumaSueldos / N;

    // Mostrar el vector de sueldos
    printf("\nVector de sueldos:\n");
    for (i = 0; i < N; i++) {
        printf("%.2f ", sueldos[i]);
    }

    // Mostrar el promedio de sueldos
    printf("\n\nPromedio de sueldos: %.2f\n", promedioSueldos);

    // Mostrar el sueldo mayor y menor
    printf("Sueldo mayor: %.2f\n", sueldoMayor);
    printf("Sueldo menor: %.2f\n", sueldoMenor);

    // Mostrar cuantas personas ganan un sueldo mayor a X y en qué posición del vector se encuentra su sueldo
    printf("\nIngrese un monto para comparar sueldos: ");
    scanf("%f", &monto);

    for (i = 0; i < N; i++) {
        if (sueldos[i] > monto) {
            personasMayorA++;
            posicion = i;
        }
    }

    printf("Cantidad de personas que ganan un sueldo mayor a %.2f: %d\n", monto, personasMayorA);

    if (personasMayorA > 0) {
        printf("El sueldo de la persona con sueldo mayor a %.2f se encuentra en la posición %d del vector.\n", monto, posicion);
    }

    return 0;
}
