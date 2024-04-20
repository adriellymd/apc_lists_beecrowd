#include <stdio.h>

int main(){
    int peca, peca2, valor_unitario, valor_unitario2;
    float codigo,codigo2,valor_pagar;
    
    scanf("%d %d %f",&peca,&valor_unitario,&codigo);
    scanf("%d %d %f",&peca2,&valor_unitario2,&codigo2);
    
    valor_pagar = valor_unitario * codigo + valor_unitario2 * codigo2;
    printf("VALOR A PAGAR: R$ %.2f\n",valor_pagar);
    return 0;
}
