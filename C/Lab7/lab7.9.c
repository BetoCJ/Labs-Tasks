#include <stdio.h>
int main (){
	
float cel, fah, pul, mi, millas, km;
	
printf("Ingrese los grados celcius que quiere transformar a fahrenheit\n");
scanf("%f", &cel);
fah = (cel*9/5)+32;

printf("Ingrese la lluvia en pulgadas que quiere transformar a milimetros\n");
scanf("%f", &pul);
mi = (pul*25.4);

printf("Ingrese el viento en millas para transformar a km\n");
scanf("%f", &millas);
km = millas * 1.609;

printf("Los valores son: \nCelcius a fahrenheit %2.0f \nPulgadas a milimetros %2.0f \nMillas a km %2.0f ", fah, mi, km);
	
return 0;	
}

