#include <stdio.h>
int main(){
    int N;
    printf("Ingrese las N edades que desea ingresar: ");
    scanf("%d",&N);
    int edades[N];
    for (int i = 0; i < N; i++)
    {
        printf("\nEdad %d: ", i + 1);
        scanf("%d", &edades[i]);
        while (edades[i] <= 0) {
            printf("La edad ingresada debe ser mayor a 0. Ingrese nuevamente: ");
            scanf("%d", &edades[i]);
        }
        int promedio = edades[i] / N;
        printf("El promedio es %d", promedio);
    }


    return 0;
}