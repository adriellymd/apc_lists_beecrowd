#include <stdio.h>

int main(){
    float gastos,velocidade,total;
    scanf("%f %f",&gastos,&velocidade);
    
    total = (gastos*velocidade)/12;
    
    printf("%.3f\n",total);
    return 0;
}
