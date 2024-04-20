#include <stdio.h>

int main(){
    char nome[100];
    double valor1, valor2, total;
    scanf("%s %lf %lf",nome,&valor1,&valor2);
    total = valor1 + (0.15*valor2);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
