#include <stdio.h>

int main(){
    int distancia;
    float combustivel, men_consumo;
    scanf("%d %f",&distancia ,&combustivel);
    
    men_consumo = distancia/combustivel;
    
    printf("%.3f km/l\n",men_consumo);
    return 0;
}
