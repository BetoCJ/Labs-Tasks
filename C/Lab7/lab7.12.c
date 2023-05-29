#include <stdio.h>
int main (){
	
	int n1, n2, n3, n4, n5, promedio;
	printf ("Ingrese sus 5 notas para saber si aprobo en una escala del 1 al 100\n");
	scanf ("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
	promedio = (n1+n2+n3+n4+n5)/5;
	if (n1 >= 1 && n1 <= 100 && n2 >= 1 && n2 <= 100 && n3 >= 1 && n3 <= 100 && n4 >= 1 && n4 <= 100 && n5 >= 1 && n5 <= 100){
		if(promedio>=60){
			printf("Aprobado con promedio %d", promedio);
			}else{
				printf("Reprobado con promedio", promedio);
		}	
	}
}