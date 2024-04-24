#include <stdio.h>

int main() {
    int n,conta;
    
    scanf("%d",&n);
    
    for(int i = 1; i < 11; i++){
    	conta = i * n;
    	printf("%d x %d = %d\n",i,n,conta); 
    }
    
    return 0;
}
