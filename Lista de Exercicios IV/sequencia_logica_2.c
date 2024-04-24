#include <stdio.h>

int main() {
    int quantidade, fim, contador = 0;
    scanf("%d %d", &quantidade, &fim);
    
    for (int i = 1; i <= fim; i++) {
        printf("%d", i);
        contador++;
        if (contador < quantidade && i != fim) {
            printf(" ");
        } else if (i != fim) {
            printf("\n");
            contador = 0;
        }
    }
    printf("\n");
    return 0;
}

