#include <stdio.h>
int main(){
	
	char a;
	do
	{
	printf ("Ingrese un letra para saber si es una vocal o una consonante\n");
	scanf("%c", &a);
	}while(a<65 && a<122);
	
	if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U'){
		printf ("Es una vocal");
	}else{
		printf ("Es consonante");
	}
	
	
	return 0;
}