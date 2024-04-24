#include <stdio.h>

int main() {
   int n,comeco=1,fim;
   scanf("%d",&n);
   
   for(int i = 0;i < n;i++){
   	for(int j =comeco;j<=(n*4);j++){
   	    if(j%4 == 0){
   	        printf("PUM\n");
   	    }
   	    else{
   	        printf("%d ",j);
   	    }
   	    comeco +=3;
   	}
   } 
   
   return 0;
}
