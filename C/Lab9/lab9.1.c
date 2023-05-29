#include <stdio.h>
int main(){
	int n, factorial;
	int i; 
	
	do {
		printf("Ingrese un numero para el calculo factorial:\n");
		scanf("%d", &n);
	}while(n<0);
	
	i = 1;
	factorial = 1;
	while(i<=n){
		factorial*=i;
		i++;
	}
	printf("El factorial de %d es: %d", n, factorial);
	
	
	return 0;
}