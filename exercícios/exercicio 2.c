#include <stdio.h>
int main(){
    int num,i=1,soma=0;
    
    scanf("%d",&num );
    for(i;i<=num;i++){
        if ((num%i)==0){
            soma+=1;  
        }
    }
    if(soma==2){
        printf("primo");
        }
    else{
        printf("não é primo");
       }
    
    
    return (0);
}
