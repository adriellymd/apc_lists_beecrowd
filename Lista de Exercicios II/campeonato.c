#include <stdio.h>

int main() {
    int Cv, Ce, Cs, Fv, Fe, Fs;
    scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);

    int pontosCormengo = Cv * 3 + Ce;
    int pontosFlaminthians = Fv * 3 + Fe;

    if (pontosCormengo > pontosFlaminthians) {
        printf("C\n");
    } else if (pontosFlaminthians > pontosCormengo) {
        printf("F\n");
    } else { 
        if (Cs > Fs) {
            printf("C\n");
        } else if (Fs > Cs) {
            printf("F\n");
        } else {
            printf("=\n");
        }
    }

    return 0;
}

