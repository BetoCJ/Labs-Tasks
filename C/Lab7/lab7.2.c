#include <stdio.h>

int main(){
 	printf("Ingrese los grados fahrenheit para transformmarlo a kelvin\n");
	float fahrenheit, kelvin;
	scanf("%f",&fahrenheit);  
	kelvin = (fahrenheit - 32)*5/9 + 273.15;
	printf("%f grados Fahrenheit equivalen a %f kelvin", fahrenheit, kelvin);

	
	return 0;
}
