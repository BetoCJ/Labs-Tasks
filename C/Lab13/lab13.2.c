#include <stdio.h>
int main(){
    float sueldo1, sueldo2;

    printf("Ingrese el sueldo de los dos trabajadores para saber cual sueldo en menor!!\n");
    do{
    printf("\nSueldo 1 ");
    printf("\nRecuerde que el sueldo tiene que ser entre $500.000 y $1.500.000\n");
    printf("\nSueldo 1: ");
    scanf("%f", &sueldo1);
    } while (sueldo1 < 500000 || sueldo1 > 1500000);
    do{
    printf("\nSueldo 2 ");
    printf("\nRecuerde que el sueldo tiene que ser entre $500.000 y $1.500.000\n");  
    printf("\nSueldo 2: ");
    scanf("%f", &sueldo2);
    } while (sueldo2 < 500000 || sueldo2 > 1500000);

    if (sueldo1 > sueldo2){
        printf("El sueldo 1 ($%2.f) es mayor que el sueldo 2 ($%2.f)\n", sueldo1, sueldo2);
    } else if (sueldo1 < sueldo2){
        printf("El sueldo 2 ($%2.f) es mayor que el sueldo 1 ($%2.f)\n", sueldo2, sueldo1);
    } else {
        printf("Los sueldos son iguales\n");
    }

    return 0;
}