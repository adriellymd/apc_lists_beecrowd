#include <stdio.h>

int main() {
    int valores;
    scanf("%d", &valores);
    for (int i = 1; i <= valores; i++) {
        if ((i % 2) == 0) {
            int quadrado = i * i;
            printf("%d^2 = %d\n", i, quadrado);
        }
    }
    return 0;
}


