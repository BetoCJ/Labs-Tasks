#include <stdio.h>
int main(){
	printf("Ingrese el grado del angulo que desea transformar a radian\n");
	float grados, radianes;
	scanf("%f", &grados);
	radianes = (grados*3.14/180);
	printf("De grados a radianes es %f", radianes);
	
	
	
	return 0;
}
