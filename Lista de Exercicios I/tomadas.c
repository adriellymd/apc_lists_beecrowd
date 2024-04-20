#include <stdio.h>

int main() {
    int tomadas[4];
    int total_tomadas = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &tomadas[i]);
        total_tomadas += tomadas[i];
    }
    int max_aparelhos = total_tomadas - 3;
    printf("%d\n", max_aparelhos);

    return 0;
}

