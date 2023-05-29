#include <stdio.h>

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int s0 = 0;
    int s1 = 1;

    printf("%d ", s0);
    printf("%d ", s1);

    for (int i = 2; i <= n; i++) {
        int sn = i - s0;
        printf("%d ", sn);
        s0 = s1;
        s1 = sn;
    }

    printf("\n");

    return 0;
}