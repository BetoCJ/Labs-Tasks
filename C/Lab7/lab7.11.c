#include <stdio.h>
int main() {
	
	int x1, x2, x3, x4, x5,  resu;
	
	printf("Ingrese 5 numeros para saber cual es menor\n ");
	scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5 );
	
	if (x1 < x2 && x1 < x3 && x1 < x4 && x1 < x5 ){
		printf("El valor menor es %d", x1);
			}else{
				if (x2 < x1 && x2 < x3 && x2 < x4 && x2 < x5 ){
	    			printf("El valor menor es %d", x2);
	    				}else{
							if (x3<x1 && x3<x2 && x3<x4 && x3<x5){
								printf("El valor menor es %d", x3);
									}else{
										if (x4<x1 && x4<x2 && x4<x3 && x4<x5){
											printf("El valor menor es %d", x4);
												}else{                              
													if (x5<x1 && x5<x2 && x5<x3 && x5<x4){
														printf("El valor menor es %d", x5);
	}
				}	
					}	
						}
							}
	return 0;
}