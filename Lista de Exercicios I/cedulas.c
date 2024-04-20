#include <stdio.h>

int main() {
    int numero, notas[7] = {100, 50, 20, 10, 5, 2, 1}, num_notas, nota;
    scanf("%d", &numero);
    
    printf("%d\n", numero);
    
    for (nota = 0; nota < 7; nota++) {
        num_notas = numero / notas[nota];
        printf("%d nota(s) de R$ %d,00\n", num_notas, notas[nota]);
        numero %= notas[nota];
    }
    
    return 0;
}

