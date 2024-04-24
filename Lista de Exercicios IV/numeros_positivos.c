#include <stdio.h>

int main() {
    int valor, positivos = 0;
    float numero;
        
    for (int valor = 0; valor < 6; valor++) {
        scanf("%f", &numero);
        if (numero > 0) {
            positivos++;	
        }   
    }
    printf("%d valores positivos\n", positivos);
    return 0;
}



