#include <stdio.h>

int main(){
    int m=1, n=1,maior,menor,soma=0;
    
    while(m > 0 && n > 0){
        scanf("%d %d",&m,&n);
        if(m > 0 && n > 0){
            if(m>n){
            maior = m;
            menor = n;
        }
        else{
            maior = n;
            menor = m;
        }
        for(int i = menor; i <= maior; i++){
            printf("%d ",i);
            soma += i;
        }
        printf("Sum=%d\n",soma);
        soma=0;
        }
        else{
            break;
        }
    }
    return 0;
    }
