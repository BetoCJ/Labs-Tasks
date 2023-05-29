#include <stdio.h>
int main(){
    int i, numero, mayor = 0;
    
    printf("Ingrese 10 numeros:\n");
    
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero);
        
        if (numero > mayor) {
            mayor = numero;
        }
    }
    
    printf("\nEl mayor numero ingresado es: %d\n", mayor);
        

    return 0;
}