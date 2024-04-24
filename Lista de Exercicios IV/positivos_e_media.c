#include <stdio.h>

int main() {
    int i, positivos = 0;
    float soma = 0.0, valor;

    for (i = 0; i < 6; i++) {
        scanf("%f", &valor);
        if (valor > 0) {
            positivos++;
            soma += valor;
        }
    }
    float media = soma / positivos;
    
    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media);

    return 0;
}




