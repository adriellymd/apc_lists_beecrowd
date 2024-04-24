#include <stdio.h>

int main() {
    int num_1, num_2, num_3;
    scanf("%d %d %d", &num_1, &num_2, &num_3);
    int lista[3] = {0};
    
    if (num_1 > num_2 && num_1 > num_3) {
        lista[2] = num_1;
        if (num_2 > num_3) {
            lista[1] = num_2;
            lista[0] = num_3;
        } else {
            lista[1] = num_3;
            lista[0] = num_2;    
        }
    }
    else if (num_2 > num_1 && num_2 > num_3) {
        lista[2] = num_2;
        if (num_1 > num_3) {
            lista[1] = num_1;
            lista[0] = num_3;
        } else {
            lista[1] = num_3;
            lista[0] = num_1;    
        }
    }
    else if (num_3 > num_2 && num_3 > num_1) {
        lista[2] = num_3;
        if (num_2 > num_1) {
            lista[1] = num_2;
            lista[0] = num_1;
        } else {
            lista[1] = num_1;
            lista[0] = num_2;    
        }
    }
    
    printf("%d\n", lista[0]);
    printf("%d\n", lista[1]);
    printf("%d\n", lista[2]);
    printf("\n");
    printf("%d\n", num_1);
    printf("%d\n", num_2);
    printf("%d\n", num_3);
    
    return 0;
}

