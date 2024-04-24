#include <stdio.h>

int main(){
    char *meses[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"}; 
    int numero;
    
    scanf("%d", &numero);
    printf("%s\n",meses[numero-1]);
    
    return 0;
}
