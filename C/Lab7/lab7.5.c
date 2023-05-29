#include <stdio.h>

int main() {
	int a, b, resu;
	printf("Dame dos numeros que quieras sumar\n");
	scanf("%d%d", &a, &b);
	resu = (a+b);
	printf("La suma es %d", resu);
	
	return 0;
}
