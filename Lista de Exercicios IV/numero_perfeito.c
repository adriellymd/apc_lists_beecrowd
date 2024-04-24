#include <stdio.h>

int main() {
    int casos, valor;

    scanf("%d", &casos);

    for (int j = 0; j < casos; j++) {
        scanf("%d", &valor);
        int divisores = 0;
        
        for (int i = 1; i < valor; i++) {
            if (valor % i == 0) {
                divisores += i;
            }
        }
        if (divisores == valor) {
            printf("%d eh perfeito\n", valor);
        } else {
            printf("%d nao eh perfeito\n", valor);
        }
    }

    return 0;
}

