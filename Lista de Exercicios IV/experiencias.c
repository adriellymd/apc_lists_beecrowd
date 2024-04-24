#include <stdio.h>
#include <string.h>

int main() {
    int n,valor,c=0,r=0,s=0,total;
    float percentualc,percentualr,percentuals;
    char tipo;
    scanf("%d",&n);
    
    for(int i = 0; i < n;i++){
    	scanf("%d %c",&valor,&tipo);
    	if(tipo == 'C'){
    	    c+=valor;
    	}
    	else if(tipo == 'R'){
    	    r+=valor;
    	}
    	else if(tipo == 'S'){
    	    s+=valor;
    	}
    	}
    total = s + c + r;
        
    percentualc = ((float)c / (float)total)*100;
    percentualr = ((float)r / (float)total)*100;
    percentuals = ((float)s / (float)total)*100;
    
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",percentualc);
    printf("Percentual de ratos: %.2f %%\n",percentualr);
    printf("Percentual de sapos: %.2f %%\n",percentuals);
    return 0;
}
