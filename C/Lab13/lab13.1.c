#include <stdio.h>
int main(){
    float nota1, nota2;

    printf("Ingrese las notas de sus dos evaluaciones para saber cual es mayor:");
    printf("\nNota 1: ");
    scanf("%f", &nota1);
    printf("\nNota 2: ");
    scanf("%f", &nota2);
    if (nota1 > nota2){
        printf("La nota 1 (%2.f) es mayor que la nota 2 (%2.f)", nota1, nota2);
    } else if (nota1 < nota2){
        printf("La nota 2 (%2.f) es mayor que la nota 1 (%2.f)", nota1, nota2);
    } else {
        printf("Las notas son iguales");
    }


    return 0;
}