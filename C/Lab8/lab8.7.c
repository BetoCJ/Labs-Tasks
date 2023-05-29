#include <stdio.h>

float promedioImpares(int n) {
    int suma = 0;
    int contador = 0;
    int numero = 1;
    
    while (contador < n) {
        if (numero % 2 != 0) {
            suma += numero;
            contador++;
        }
        numero++;
    }
    
    return (float)suma / n;
}

int main() {
    int n;
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    float promedio = promedioImpares(n);
    
    printf("El promedio de los primeros %d numeros impares es: %.2f\n", n, promedio);
    
    return 0;
}