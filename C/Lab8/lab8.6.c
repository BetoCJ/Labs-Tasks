#include <stdio.h>
int main(){
    int n, i, suma = 0;
    float promedio;
    //Se pide la cantidad
    do{
    printf("Ingrese la cantidad de multiplos de 5 a promediar: ");
    scanf("%d", &n);
    }while(n<=0);

    for (i = 1; i <= n; i++){
        suma += i * 5;
    }

    promedio = (float)suma / n;
    //Imprime el promedio
    printf("El promedio de los primeros %d multiplos de 5 es: %.1f\n", n, promedio);

    return 0;
}