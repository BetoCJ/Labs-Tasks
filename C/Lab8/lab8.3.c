#include <stdio.h>
#include <math.h>
int main (){

	float x, resu;
	printf("Ingrese un valor para saber el resultado de la funcion\n");
	scanf("%f", &x);

	if (x<=-50){
		resu = (3*(x*x*x))-7*x+10;
		printf("El resultado es \n%f", resu);
	}else{
		if (-50<x && x < 0){
			resu = (2*(x*x*x)+(3*x))/(5*(x*x));
			printf("El resultado es \n%f", resu);
	}else{
			if (0<x && x<=50){
				resu = (9*(x*x*x))+(25*(x*x))-105;
				printf("El resultado es \n%f", resu);
	}else{
				if (x>50){
					resu = ((12*(x*x*x))-(3*(x*x))+(65*x)-1)/(((7*x)*(7*x)+2));
					printf("El resultado es \n%f", resu);
	}	
		}
			}
				}
	
return 0;
}
