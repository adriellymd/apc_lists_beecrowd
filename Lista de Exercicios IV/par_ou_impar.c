#include <stdio.h>

int main() {
    int N,valor;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
    	scanf("%d", &valor);    	
    
    
    if(valor == 0){
    	    printf("NULL\n");
    	}
    else if(valor%2==0 && valor>0){
    	    printf("EVEN POSITIVE\n");
    	   }
    else if(valor%2==0 && valor<0){
    	   printf("EVEN NEGATIVE\n");
    	 }
    	    
    else if(valor%2!=0 && valor > 0){
    	   printf("ODD POSITIVE\n");
    	    }
    else{
    	    printf("ODD NEGATIVE\n");
    	  }
    	}	
    return 0;
}

