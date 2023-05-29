#include <stdio.h>
int main(){

    int n, i;
    double resultado = 0;

    printf("Ingrese el valor de n: ");
    scanf("%d",&n);

    for (i=0; i<n; i++){
        double termino = (3*(i*i*i))-(2*(2*(i*i)))+(3*i);
        resultado += termino;
    }

    printf("El resultado es:  %2.f", resultado);


    return 0;
}