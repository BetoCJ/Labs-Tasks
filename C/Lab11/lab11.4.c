#include <stdio.h>

int main() {
    int N, i;
    float temperatura;
    float sumaTemperaturas = 0;
    float temperaturaMayor = 0, temperaturaMenor = 0;
    int temperaturasMenoresCero = 0;
    int temperaturasMayoresQuince = 0;
    int temperaturasMayoresPromedio = 0, temperaturasMenoresPromedio = 0;

    printf("Ingrese la cantidad de temperaturas: ");
    scanf("%d", &N);

    // Crear el vector de temperaturas
    float temperaturas[N];

    // Ingresar las temperaturas y realizar los cálculos
    printf("\nIngrese las temperaturas en grados Celsius:\n");
    for (i = 0; i < N; i++) {
        printf("Temperatura %d: ", i + 1);
        scanf("%f", &temperatura);

        temperaturas[i] = temperatura;

        sumaTemperaturas += temperatura;

        if (temperatura < 0) {
            temperaturasMenoresCero++;
        }

        if (temperatura > 15) {
            temperaturasMayoresQuince++;
        }

        if (i == 0) {
            temperaturaMayor = temperatura;
            temperaturaMenor = temperatura;
        } else {
            if (temperatura > temperaturaMayor) {
                temperaturaMayor = temperatura;
            }
            if (temperatura < temperaturaMenor) {
                temperaturaMenor = temperatura;
            }
        }
    }

    // Calcular el promedio de temperaturas
    float promedioTemperaturas = sumaTemperaturas / N;

    // Mostrar todos los valores dentro del vector
    printf("\nTemperaturas ingresadas:\n");
    for (i = 0; i < N; i++) {
        printf("%.2f ", temperaturas[i]);
    }

    // Mostrar cuantas temperaturas son menores que cero
    printf("\n\nCantidad de temperaturas menores que cero: %d\n", temperaturasMenoresCero);

    // Mostrar las temperaturas que superan los 15°C
    printf("Temperaturas mayores a 15°C:\n");
    for (i = 0; i < N; i++) {
        if (temperaturas[i] > 15) {
            printf("%.2f ", temperaturas[i]);
        }
    }
    printf("\n");

    // Mostrar la temperatura mayor y menor
    printf("\nTemperatura mayor: %.2f°C\n", temperaturaMayor);
    printf("Temperatura menor: %.2f°C\n", temperaturaMenor);

    // Mostrar cuantas temperaturas son mayores y cuantas menores al promedio de temperaturas
    for (i = 0; i < N; i++) {
        if (temperaturas[i] > promedioTemperaturas) {
            temperaturasMayoresPromedio++;
        }
        if (temperaturas[i] < promedioTemperaturas) {
            temperaturasMenoresPromedio++;
        }
    }

    printf("\nCantidad de temperaturas mayores al promedio: %d\n", temperaturasMayoresPromedio);
    printf("Cantidad de temperaturas menores al promedio: %d\n", temperaturasMenoresPromedio);

    return 0;
}
