#include <stdio.h>

int main() {
	float a, b, c, d;
	printf("Dime los 3 numeros que quieras promediar\n");
	scanf("%f%f%f", &a, &b, &c);
	d = ((a+b+c)/3);
	
	printf("El resultado es %2.f", d);

return 0;
}
