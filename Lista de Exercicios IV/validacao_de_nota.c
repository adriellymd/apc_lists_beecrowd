#include <stdio.h>

int main(){
    float validos=0,nota,nota1,nota2;
    while(validos < 2){
        scanf("%f",&nota);
        if(nota >= 0 && nota <= 10){
            validos ++;
            if(validos==1){
                nota1=nota;
            }
            else if(validos==2){
                nota2=nota;
            }
        }
        else{
            printf("nota invalida\n");
        }
    }
    nota = (nota1+nota2)/2;
    printf("media = %.2f\n",nota);
    return 0;
    }

