#include <stdio.h>
int main(){
    int n, i;
    printf("Ingrese los primeros n numeros que quiere imprimir (multiplos de 3): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d\n", i * 3);
    }
}