#include <stdio.h>

int main(){
   float n1,n2,n3,n4,n5,media,media_final;
   scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
   
   media = (2*n1+3*n2+4*n3+n4)/10;
   
   if(media >= 7.0){
	printf("Media: %.1f\n",media);
    	printf("Aluno aprovado.\n");
   }
   
   else if(media < 5.0){
   	printf("Media: %.1f\n",media);
    	printf("Aluno reprovado.\n");
   }
   
   else if(5.0 <= media && media <= 6.9){
   	scanf("%f",&n5);
    	printf("Media: %.1f\n",media);
    	printf("Aluno em exame.\n");
    	media_final = (n5+media)/2;
    	printf("Nota do exame: %.1f\n",n5);
    	
    	if(media_final >= 5.0){
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n",media_final);
    	}
    	
    	else{
        printf("Aluno reprovado.\n");
        }
   }
   
   return 0;
}
