#include <stdio.h>

int main(){
    int quantidade,x,y,impar=0,maior,menor;
    	
    scanf("%d",&quantidade);

    for(int i = 0; i < quantidade ; i++){
        scanf("%d %d", &x, &y);
        if(x > y){
            maior = x; 
            menor = y;
        }
        else{
            maior=y;
            menor=x;
        }
        for(int j = menor+1; j < maior;j++){
            if(j % 2 != 0){
            impar += j;
        }
        }
        printf("%d\n",impar);
        impar = 0;
    }
    
    return 0;
    }
