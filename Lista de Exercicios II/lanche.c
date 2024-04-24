#include <stdio.h>

int main(){
    int codigo,quantidade;
    float preco[] = {4.00,4.50,5.00,2.00,1.50},total;
    scanf("%d %d",&codigo,&quantidade);
    
    total = quantidade*preco[codigo-1];
    
    printf("Total: R$ %.2f\n",total);
    return 0;
}
