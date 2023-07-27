#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[51];
    int c, i = 0, vocales = 0, tamaño = 0, mayusculas = 0, minusculas = 0;
    
    printf("Ingrese una frase (máximo 50 caracteres): ");
    
    while ((c = getchar()) != '\n' && c != EOF && i < 50) {
        frase[i] = c;
        i++;
    }
    frase[i] = '\0';
    tamaño = i;
    
    // Contar las vocales, mayúsculas y minúsculas
    for (i = 0; i < tamaño; i++) {
        char ch = frase[i];
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vocales++;
        }
        
        if (isupper(ch)) {
            mayusculas++;
        }
        
        if (islower(ch)) {
            minusculas++;
        }
    }
    
    // Mostrar el número de vocales
    printf("\nNúmero de vocales: %d\n", vocales);
    
    // Mostrar el tamaño de la cadena de caracteres
    printf("Tamaño de la cadena: %d\n", tamaño);
    
    // Mostrar el número de mayúsculas y minúsculas
    printf("Número de mayúsculas: %d\n", mayusculas);
    printf("Número de minúsculas: %d\n", minusculas);
    
    return 0;
}
