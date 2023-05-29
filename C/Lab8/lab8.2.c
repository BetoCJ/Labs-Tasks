#include <stdio.h>
int main(){

float uf, utm, uta;
int clp;

printf("Ingrese el valor de su clp para transformar en UF, UTM Y UTA\n");
scanf("%d", &clp);

uf = clp / 35574.33;
utm = clp / 62388.0;
uta = clp / 748656.0;

printf("Los valores son:\n%f\n%f\n%f", uf, utm, uta);

printf("\nIngrese el valor de su UF para transformar en CLP, UTM Y UTA\n");
scanf("%f", &uf);

clp = uf * 35574.33;
utm = (uf*35574.33)/62388.0;
uta = (uf*35574.33) / 748656.0;

printf("Los valores son:\n%d\n%f\n%f", clp, utm, uta);

printf("\nIngrese el valor de su UTM para transformar en CLP, UF Y UTA\n");
scanf("%f", &utm);

clp = utm * 62388;
uf = (utm * 62388)/35574.33;
uta = (utm * 62388) / 748656.0;

printf("Los valores son:\n%d\n%f\n%f", clp, uf, uta);

printf("\nIngrese el valor de su UTM para transformar en CLP, UF Y UTA\n");
scanf("%f", &uta);

clp = uta * 748656.0;
uf = (uta * 748656.0)/35574.33;
utm = (uta * 748656.0) / 62388.0;

printf("Los valores son:\n%d\n%f\n%f", clp, uf, uta);

return 0;
}