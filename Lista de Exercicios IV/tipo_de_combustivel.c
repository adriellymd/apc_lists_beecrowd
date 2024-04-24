#include <stdio.h>

int main(){
    int valor = 0, alcool=0, gasolina=0,diesel=0;
    
    while(valor != 4){
        scanf("%d",&valor);
        if(1 <= valor && valor <= 3){
            if(valor==1){
                alcool++;
            }
            else if(valor==2){
                gasolina++;
            }
            else{
                diesel++;
            }
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasolina);
    printf("Diesel: %d\n",diesel);
    return 0;
    }

