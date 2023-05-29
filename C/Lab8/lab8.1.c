#include <stdio.h>
int main(){
	int a;
	
	printf("Ingrese su sueldo para saber a que credito puede optar: ");
	scanf("%d", &a);
	
	if (a < 800000){
		printf("No tienes derecho a credito");
	}else{
		if (a>=800000 || a<=1500000){
			printf("Tiene derecho a un credito hasta por $2.000.000");
		}else{
			if (a>1500000);
				printf("Tiene derecho a un credito hasta por $4.000.000");
	}
	}
	
	
return 0;
}