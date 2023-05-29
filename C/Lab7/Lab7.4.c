#include <stdio.h>

int main() {
	float  dolar, euro, yen, libra, franco;
	int clp;
	printf("Ingrese la cantidad de clp que quiere transformar a dolar, euro, yen, libra esterlina y franco suizo\n ");
	scanf("%d", &clp);
	dolar = (clp*0.0013);
	euro = (clp*0.0011); 
	yen = (clp*0.17);
	libra = (clp*0.0010);
	franco = (clp*0.0011);
	printf ("Estos son los precios de clp a \ndolar %.2f \neuro %.2f \nyen %.2f \nlibra %.2f \nfranco %.2f  ", dolar, euro, yen, libra, franco);
	
	return 0;
	
}

