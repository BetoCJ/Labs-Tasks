#include <stdio.h>
int main(){
	
	int s1, s2, s3;
	do
	{
	printf("Ingrese los 3 lados de su triangulo para saber si es equilatero, escaleno o isosceles\n");
 	scanf("%d%d%d", &s1, &s2, &s3);
 	}while(s1+s2 < s3 || s2+s3 < s1 || s1+s3 < s2);
 	
	if (s1+s2 > s3 || s2+s3 > s1 || s1+s3 > s2){
		printf("Si es un triangulo\n");
	}
	
	if (s1=s2 && s1==s3){
		printf("El triangulo es equilatero");	
		}else{
		if (s1!=s2 && s1!=s3){
			printf("El triangulo es escaleno");
			}else{
			if (s1==s2 || s1==s3 || s2==s1 || s2==s3 || s3==s1 || s3==s2){
				printf("El triangulo es isosceles");
	}	
		}
			}
	return 0;
}