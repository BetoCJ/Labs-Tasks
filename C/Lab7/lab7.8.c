#include <stdio.h>
int main() {
	float x, resu;
	printf("Ingrese el valor de x para desarrollar la funcion\n");
	scanf("%f", &x);
	resu = ((2*x-5)*(2*x-5))+((3*x+1)*(3*x+1));
	printf("El resultado es %2.f", resu);
	
	return 0;
}
