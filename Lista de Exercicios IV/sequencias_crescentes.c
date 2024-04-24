#include <stdio.h>

int main() {
    int valor=1;
    
    while(valor!=0){
    	scanf("%d",&valor);
    	int i = 1;
    	for(;i < valor;i++){
    	    printf("%d ",i);
    	}
    	
    	if(valor!=0){
    	printf("%d\n",i);
    	}
    }    
    return 0;
}

