#include <stdio.h>

int main(){
    int inicial, final, duracao;
    scanf("%d %d", &inicial, &final);
    
    if (inicial < final){
        duracao = final - inicial;
    }
    else if (inicial > final){
        duracao = 24 - inicial + final;
    }
    else{
        duracao = 24;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}

