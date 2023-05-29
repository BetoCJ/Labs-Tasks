#include <stdio.h>
int main() {
	int x, resul;
	
	printf("Ingrese un numero para saber si es multiplo de 5\n");
	scanf("%d", &x);
	if (x%5==0)
	{
		printf("Es multiplo de 5");
	}else{
		printf ("No es multiplo de 5");
	}
	
	
	return 0;
}