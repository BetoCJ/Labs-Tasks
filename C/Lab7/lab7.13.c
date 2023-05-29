#include <stdio.h>

int main(){
	
	int x, resu1, resu2, resu3;
	printf("Ingrese el valor de x para resolver la funcion\n");
	scanf("%d", &x);
	if (x<0){
		resu1 = 7*x+12;
		printf("El resultado es %d", resu1);
		}else{
			if (x>=0 && x<100){
				resu2 = ((x*2)*(x*2))-11;
				printf("El resultado es %d", resu2);
			}else{
				if (x>=100){
					resu2 = ((x*2)*(x*2))+3*x;
					printf("El resultado es %d", resu3);
	}
			}
				}
	return 0;
}