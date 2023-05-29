#include <stdio.h>

int contarDivisibles(int a, int b, int n) {
    int contador = 0;
    
    // Verificar si 'a' es divisible por 'n'
    if (a % n == 0)
        contador++;
    
    // Calcular el primer múltiplo de 'n' dentro del rango
    int primerMultiplo = ((a / n) + 1) * n;
    
    // Calcular la cantidad de números divisibles por 'n'
    if (primerMultiplo <= b)
        contador += (b - primerMultiplo) / n + 1;
    
    return contador;
}

int main() {
    int a, b, n;
    
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    int cantidadDivisibles = contarDivisibles(a, b, n);
    
    printf("La cantidad de números divisibles por %d en el intervalo [%d, %d] es: %d\n", n, a, b, cantidadDivisibles);
    
    return 0;
}
