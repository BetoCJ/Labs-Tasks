#include <stdio.h>
int main() {
	float a, b, c;
	printf("Dame el valor de los dos angulos para saber saber el tercer angulo\n" );
	scanf("%f%f", &a, &b);
	c = 180-a-b;
	printf("El resultado es %2.f", c);
	
	
	return 0;
}


