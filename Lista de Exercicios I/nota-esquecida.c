#include <stdio.h>

int main() {
    int nota_lembrada, media, outra_nota;

    scanf("%d", &nota_lembrada);
    scanf("%d", &media);
    
    outra_nota = 2 * media - nota_lembrada;
    
    printf("%d\n", outra_nota);
    
    return 0;
}
